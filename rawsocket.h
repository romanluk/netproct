#ifndef RAWSOCKET_H
#define RAWSOCKET_H

#include <WinSock2.h>
#include <iostream>
#include "ipheader.h"

#define MAX_PACKET_SIZE  0x10000

using namespace std;

class RawSocket
{
    SOCKET socket_;
public:
    RawSocket();
    IpHeader* Sniff();
};

#endif // RAWSOCKET_H
