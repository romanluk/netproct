#ifndef IPHEADER_H
#define IPHEADER_H

#include <string>
#include <sstream>
using namespace std;

class IpHeader
{
    unsigned char  ver_len_;
    unsigned char  tos_;
    unsigned short length_;
    unsigned short id_;
    unsigned short flgs_offset_;
    unsigned char  ttl_;
    unsigned char  protocol_;
    unsigned short xsum_;
    unsigned long  src_;
    unsigned long  dest_;
    unsigned short *params_;
    unsigned char  *data_;

    char ByteH(char c) { return c & 0xF; }
    char ByteL(char c) { return c >> 4; }

public:
    string ToString();
};

#endif // IPHEADER_H
