#include "rawsocket.h"

RawSocket::RawSocket()
{
    socket_ = socket(AF_INET, SOCK_RAW, IPPROTO_IP);
}
