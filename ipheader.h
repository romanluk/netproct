#ifndef IPHEADER_H
#define IPHEADER_H
s
#include <string>
#include <ostream>
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
public:
    IpHeader();
    string ToString();
};

#endif // IPHEADER_H
