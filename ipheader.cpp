#include "ipheader.h"

string IpHeader::ToString() {
    stringstream stream;
    stream << " ver=" << ByteH(ver_len_)
           << " hlen=" << ByteL(ver_len_)
           << " tos=" << tos_;
    return stream.str();
}
