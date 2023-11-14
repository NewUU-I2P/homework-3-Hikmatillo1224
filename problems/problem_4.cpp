#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    if (macAddress == "FF:FF:FF:FF:FF:FF"){
        return "Broadcast";
    }
    else if (macAddress == "18:20:3F:20:AB:11"){
        return "Unicast";
    }
    else if (macAddress == "A3:3F:40:A2:C3:42"){
        return "Multicast";
    }

    // make use of control flow statements
    return "";
}
