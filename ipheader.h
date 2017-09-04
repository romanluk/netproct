#ifndef IPHEADER_H
#define IPHEADER_H

#include <string>
#include <sstream>
using namespace std;

class IpHeader
{
    unsigned char header_len : 4;    //Length of header
    unsigned char version : 4;       // IP protocol version
    unsigned char tos;               // Type of service
    unsigned short total_length;     // Total length
    unsigned short id;               //ID of ip packet
    unsigned char frag_offset : 5;   //Fragmentation offset
    unsigned char more_fragment : 1; //More fragment
    unsigned char dont_fragment : 1; //Dont fragment
    unsigned char reserved_zero : 1; //Reserverd zero
    unsigned char frag_offset1;      // Offset
    unsigned char ttl;               // Time to live
    unsigned char protocol;          // Underlaying protocol (TCP, UDP...)
    unsigned short checksum;         //Checksum
    unsigned int srcaddr;            //source address
    unsigned int destaddr;           //destination addresss

    char ByteH(char c) { return c & 0xF; }
    char ByteL(char c) { return c >> 4; }

public:
    string ToString();
};

#endif // IPHEADER_H
