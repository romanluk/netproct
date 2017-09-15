#ifndef IPHEADER_H
#define IPHEADER_H

#include <string>
#include <sstream>
#include <winsock.h>
using namespace std;

class IpHeader
{
    unsigned char header_len_ : 4;    // Length of header
    unsigned char version_ : 4;       // IP protocol version
    unsigned char tos_;               // Type of service
    unsigned short total_length_;     // Total length
    unsigned short id_;               // ID of ip packet
    unsigned char frag_offset_ : 5;   // Fragmentation offset
    unsigned char more_fragment_ : 1; // More fragment
    unsigned char dont_fragment_ : 1; // Dont fragment
    unsigned char reserved_zero_ : 1; // Reserverd zero
    unsigned char frag_offset1_;      // Offset
    unsigned char ttl_;               // Time to live
    unsigned char protocol_;          // Underlaying protocol (TCP, UDP...)
    unsigned short checksum_;         // Checksum
    unsigned int srcaddr_;            // Source address
    unsigned int destaddr_;           // Destination addresss

    string UnsignedIpToString (unsigned int ip);

public:
    string ToString();
};

#endif // IPHEADER_H
