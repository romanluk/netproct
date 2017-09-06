#include <iostream>
#include "rawsocket.h"

using namespace std;

int main()
{
    RawSocket *raw_socket = new RawSocket();
    while (true) {
        IpHeader *header = raw_socket->Sniff();
        if (header){
            cout << header->ToString() << "\n";
        }
    }
    return 0;
}
