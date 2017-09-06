#include "rawsocket.h"

RawSocket::RawSocket() {
    WSADATA info;
    WSAStartup(MAKEWORD(2, 2), &info);

    socket_ = socket(AF_INET, SOCK_RAW, IPPROTO_IP);
    if (socket_ == INVALID_SOCKET) {
        cout << "Could not create socket\n";
    }

    char hostname[128];
    gethostname(hostname, sizeof(hostname));
    HOSTENT *host_info = gethostbyname(hostname);

    SOCKADDR_IN socket_address;
    ZeroMemory(&socket_address, sizeof(socket_address));
    socket_address.sin_family = AF_INET;
    socket_address.sin_addr.s_addr = ((struct in_addr *)host_info->h_addr_list[0])->s_addr;

    if (bind(socket_, (SOCKADDR *)&socket_address, sizeof(SOCKADDR)) == -1){
        cout << "Bind failed\n";
    }

    u_long flag = 1;
    ioctlsocket(socket_, SIO_RCVALL, &flag);
}

IpHeader* RawSocket::Sniff() {
    IpHeader *header = new IpHeader;
    char buffer[MAX_PACKET_SIZE];
    memset(buffer, 0, sizeof(buffer));

    int size = recv(socket_, buffer, sizeof(buffer), 0);
    if (size >= (int)sizeof(IpHeader)) {
        header = (IpHeader*)buffer;
    }
    return header;
}
