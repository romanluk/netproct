#include "ipheader.h"

string IpHeader::ToString() {
    stringstream stream;
    stream << " hlen=" << to_string(header_len_)
           << " version=" << to_string(version_)
           << " tos=" << to_string(tos_)
           << " total len=" << to_string(total_length_)
           << " id=" << to_string(id_)
           << " frag_offset=" << to_string(frag_offset_)
           << " more_frag=" << to_string(more_fragment_)
           << " dont_frag=" << to_string(dont_fragment_)
           << " reserved_zero=" << to_string(reserved_zero_)
           << " frag_offset1_=" << to_string(frag_offset1_)
           << " ttl=" << to_string(ttl_)
           << " protocol" << to_string(protocol_)
           << " srcaddr=" << UnsignedIpToString(srcaddr_)
           << " destaddr=" << UnsignedIpToString(destaddr_);
    return stream.str();
}

string IpHeader::UnsignedIpToString(unsigned int ip) {
    unsigned char bytes[4];
    bytes[0] = ip & 0xFF;
    bytes[1] = (ip >> 8) & 0xFF;
    bytes[2] = (ip >> 16) & 0xFF;
    bytes[3] = (ip >> 24) & 0xFF;
    string res = to_string(bytes[3]) + "." +  to_string(bytes[2]) + "." +
            to_string(bytes[1]) + "." + to_string(bytes[0]);
    return res;
}
