//
//  oscpack.cpp
//  oscpack
//
//  Created by Jacob Sologub on 8/17/18.
//  Copyright © 2018 Jacob Sologub. All rights reserved.
//

#include <cstddef>
#include "osc/OscTypes.cpp"
#include "osc/OscOutboundPacketStream.cpp"
#include "osc/OscReceivedElements.cpp"
#include "osc/OscPrintReceivedElements.cpp"
#include "ip/IpEndpointName.cpp"
#if defined (_WIN32) || defined (_WIN64)
 #include "ip/win32/UdpSocket.cpp"
 #include "ip/win32/NetworkingUtils.cpp"
#elif defined (__APPLE__) || defined (__linux__)
 #include "ip/posix/UdpSocket.cpp"
 #include "ip/posix/NetworkingUtils.cpp"
#else
 #error "Unknown platform!"
#endif
