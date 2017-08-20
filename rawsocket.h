#ifndef RAWSOCKET_H
#define RAWSOCKET_H

#include <WinSock2.h>

class RawSocket
{
    //Service types
    #define IpService_NETWORK_CONTROL 111
    #define IpService_INTERNETWORK_CONTROL 110
    #define IpService_CRITIC_ECP 101
    #define IpService_FLASH_OVERIDE 100
    #define IpService_FLASH 011
    #define IpService_IMMEDIATE 010
    #define IpService_PRIORITY 001
    #define IP_SERVICE_ROUTINE 0

    //Fragmetation flag
    #define IpFragFlag_MAY_FRAG 0x0000
    #define IpFragFlag_MORE_FRAG 0x2000
    #define IpFragFlag_LAST_FRAG 0x5000
    #define IpFragFlag_DONT_FRAG 0x4000

    #define ICMPHeaderLength sizeof(ICMPHeader)
    #define IPHeaderLength sizeof(IPHeader)

    #define PROT_HOPOPT		 0      //	        IPv6 Hop-by-Hop Option                   [RFC1883]
    #define PROT_ICMP		 1		//          Internet Control Message                 [RFC792]
    #define PROT_IGMP		 2		//          Internet Group Management                [RFC1112]
    #define PROT_GGP		 3		//          Gateway-to-Gateway                       [RFC823]
    #define PROT_IP		  	 4		//          IP in IP (encapsulation)                 [RFC2003]
    #define PROT_ST			 5		//          Stream                                   [RFC1190][RFC1819]
    #define PROT_TCP		 6		//          Transmission Control                     [RFC793]
    #define PROT_CBT		 7		//          CBT                                      [Ballardie]
    #define PROT_EGP		 8		//          Exterior Gateway Protocol                [RFC888][DLM1]
    #define PROT_IGP		 9		//          any private interior gateway             [IANA]
    #define PROT_BBN_RCC_MON 10     //			BBN RCC Monitoring                       [SGC]
    #define PROT_NVP_II      11     //			Network Voice Protocol                   [RFC741][SC3]
    #define PROT_PUP         12     //			PUP                                      [PUP][XEROX]
    #define PROT_ARGUS       13     //			ARGUS                                    [RWS4]
    #define PROT_EMCON       14     //			EMCON                                    [BN7]
    #define PROT_XNET        15     //			Cross Net Debugger                       [IEN158][JFH2]
    #define PROT_CHAOS       16     //			Chaos                                    [NC3]
    #define PROT_UDP         17     //			User Datagram                            [RFC768][JBP]
    #define PROT_MUX         18     //			Multiplexing                             [IEN90][JBP]
    #define PROT_DCN_MEAS    19     //			DCN Measurement Subsystems               [DLM1]

    SOCKET socket_;
public:
    RawSocket();
};

#endif // RAWSOCKET_H
