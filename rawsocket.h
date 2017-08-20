#ifndef RAWSOCKET_H
#define RAWSOCKET_H

#include <WinSock2.h>
#include "ipheader.h"
#define MAX_PACKET_SIZE  0x10000

class RawSocket
{
    SOCKET socket_;
public:
    RawSocket();
    IpHeader* Sniff();
};

#endif // RAWSOCKET_H
