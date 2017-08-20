#include "ipheader.h"

string IpHeader::ToString() {
    ostringstream stream;
    stream << "ver=";
    return stream.str();
}
