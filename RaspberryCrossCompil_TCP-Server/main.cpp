#include <sys/unistd.h>

#include <ifaddrs.h>
#include <arpa/inet.h>

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <fstream>
#include <strings.h>
#include <stdlib.h>
#include <string>
#include <pthread.h>

#include "CONF.h"

#include "RCSwitch.h"


using namespace std;

void *task1 (void *dummyPt);



static int connFd;

RCSwitch mySwitch = RCSwitch();

string getMyIP()
{
		
    struct ifaddrs * ifAddrStruct=NULL;
    struct ifaddrs * ifa=NULL;
    void * tmpAddrPtr=NULL;

    getifaddrs(&ifAddrStruct);

    for (ifa = ifAddrStruct; ifa != NULL; ifa = ifa->ifa_next) {
        if (!ifa->ifa_addr) {
            continue;
        }
        if (ifa->ifa_addr->sa_family == AF_INET) { // check it is IP4
            // is a valid IP4 Address
            tmpAddrPtr=&((struct sockaddr_in *)ifa->ifa_addr)->sin_addr;
            char addressBuffer[INET_ADDRSTRLEN];
            inet_ntop(AF_INET, tmpAddrPtr, addressBuffer, INET_ADDRSTRLEN);
            //printf("%s IP Address %s\n", ifa->ifa_name, addressBuffer);
			//cout << ifa->ifa_name << endl;
			if((!strcmp(ifa->ifa_name,"eth0"))||(!strcmp(ifa->ifa_name,"wlan0"))){
				//cout << addressBuffer << endl;
				return addressBuffer;
			}
        } else if (ifa->ifa_addr->sa_family == AF_INET6) { // check it is IP6
            // is a valid IP6 Address
            tmpAddrPtr=&((struct sockaddr_in6 *)ifa->ifa_addr)->sin6_addr;
            char addressBuffer[INET6_ADDRSTRLEN];
            inet_ntop(AF_INET6, tmpAddrPtr, addressBuffer, INET6_ADDRSTRLEN);
            //printf("%s IP Address %s\n", ifa->ifa_name, addressBuffer); 
        } 
    }
    if (ifAddrStruct!=NULL) freeifaddrs(ifAddrStruct);
    return "";
	
}


int main(int argc, char* argv[])
{

	 	if (wiringPiSetup () == -1) return 1;
		pinMode(RF_EMITTER_PIN, OUTPUT) ;
	 	mySwitch.enableTransmit(RF_EMITTER_PIN);

		int pId, portNo, listenFd;
		socklen_t len; //store size of the address
		bool loop = false;
		struct sockaddr_in svrAdd, clntAdd;
		
		pthread_t threadA[3];
		
		if (argc < 2)
		{
			//cerr << "Syntax : ./server <port>" << endl;
			//return 0;
			//cout << "Using default port" << endl;
			portNo = 51717;
		}
		else
		{
		portNo = atoi(argv[1]);
		}
		
		if((portNo > 65535) || (portNo < 2000))
		{
			cerr << "Please enter a port number between 2000 - 65535" << endl;
			return 0;
		}
		
		//create socket
		listenFd = socket(AF_INET, SOCK_STREAM, 0);
		
		if(listenFd < 0)
		{
			cerr << "Cannot open socket" << endl;
			return 0;
		}
		
		bzero((char*) &svrAdd, sizeof(svrAdd));
		
		svrAdd.sin_family = AF_INET;
		svrAdd.sin_addr.s_addr = INADDR_ANY;
		svrAdd.sin_port = htons(portNo);
		
		//bind socket
		if(bind(listenFd, (struct sockaddr *)&svrAdd, sizeof(svrAdd)) < 0)
		{
			cerr << "Cannot bind" << endl;
			return 0;
		}
		
		listen(listenFd, 5);
		
		len = sizeof(clntAdd);
		
		cout << endl;
		cout << "### NETWORK CONF ###" << endl;
		cout << "IP   : " << getMyIP() << endl;
		cout << "PORT : " << portNo << endl;
		cout << "####################" << endl;

		cout << "#### GPIO CONF #####" << endl;
		cout << "[" << RF_EMITTER_PIN << "] RF Emitter" << endl;
		cout << "####################" << endl;
		
		cout << "#### PLUG CONF #####" << endl;
		cout << "[" << PLUG_PRUSA_FIRST_CODE << "] [" << PLUG_PRUSA_SECOND_CODE << "] Prusa i3" << endl;
		cout << "####################" << endl;
		cout << endl;

		while (true)
		{
			
	
			cout << "Listening... " << endl;

			//this is where client connects. svr will hang in this mode until client conn
			connFd = accept(listenFd, (struct sockaddr *)&clntAdd, &len);

			if (connFd < 0)
			{
				cerr << "Cannot accept connection !" << endl;
				return 0;
			}
			else
			{
				cout << "Connection successful !" << endl;
			}
			
			pthread_t thread;
			
			pthread_create(&thread, NULL, task1, NULL);
			
		}
		
		/*
		int noThread = 0;
		while (noThread < 3)
		{
			
	
			cout << "Listening... " << endl;

			//this is where client connects. svr will hang in this mode until client conn
			connFd = accept(listenFd, (struct sockaddr *)&clntAdd, &len);

			if (connFd < 0)
			{
				cerr << "Cannot accept connection !" << endl;
				return 0;
			}
			else
			{
				cout << "Connection successful !" << endl;
			}
			
			//pthread_t thread;
			
			pthread_create(&threadA[noThread], NULL, task1, NULL);
			
			noThread++;
		}
		
		for(int i = 0; i < 3; i++)
		{
			pthread_join(threadA[i], NULL);
		}
		*/
    
  
}

void *task1 (void *dummyPt)
{
    cout << "Thread " << pthread_self() << endl;
	cout << "On your order !  " << endl;

	
	write(connFd, "Connected", MSG_TO_SERVER_LEN);
	
	char msgtoServer[MSG_TO_SERVER_LEN];

    char data[300];
    bzero(data, 301);
    bool loop = true;
    while(loop)
    {    
        bzero(data, 301);
        
        
        read(connFd, data, 300);
		
		if(strlen(data)==0)
		{
			loop = false;
			break;
        }
		
        string command (data);
        //cout << "RCV : " << command << endl;
        
		int M = -1;
		sscanf (data,"M%d",&M);
		//printf ("M%d\n",M);

		//cout << M << endl;
		

		if(M==0)
		{	
			//M0 : DO NOTHING, only echo for debug
			sprintf(msgtoServer,"M0 command receveid (debug only)");

		}
		else if(M==1)
		{	
			//M1 : TURN ON 3D Printer
			sprintf(msgtoServer ,"3D Printer : ON ");
			mySwitch.switchOn(PLUG_PRUSA_FIRST_CODE, PLUG_PRUSA_SECOND_CODE);
		}
		else if(M==2)
		{	
			//M2 : TURN OFF 3D Printer
			sprintf(msgtoServer,"3D Printer : OFF");
			mySwitch.switchOff(PLUG_PRUSA_FIRST_CODE, PLUG_PRUSA_SECOND_CODE);
		}
		else if(M==9)
		{	
			//M9 : STOP THE RASPBERRY PI
			sprintf(msgtoServer,"Raspberry Pi Server : SHUT DOWN");
			
			char systemCommand[] = "sudo halt";
			printf("%s\n",systemCommand);
			system(systemCommand);
		}
		else if(M==10)
		{	
			//M10 : RESTART THE RASPBERRY PI
			sprintf(msgtoServer, "Raspberry Pi Server : RESTART");
			
			char systemCommand[] = "sudo reboot";
			printf("%s\n",systemCommand);
			system(systemCommand);
		}
		

		cout << msgtoServer << endl;
		write(connFd, msgtoServer, MSG_TO_SERVER_LEN);

			
		if(command == "exit")
		{
			loop = false;
			break;
		}
    }
    cout << "\nClosing thread and connection !" << endl;
    close(connFd);
	//pthread_exit(3);
	//pthread_join(*thread, NULL);
	//terminate();
}
