#include "ipheader.h"

string IpHeader::ToString() {
    stringstream stream;
    stream << " ver=" << ByteH(version_)
           << " hlen=" << ByteL(header_len_)
           << " tos=" << tos_;
    return stream.str();
}
