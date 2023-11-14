#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    if (S=='M'){
        if (height<170){
            return "short";
        }
        else if (height>=170 and height<185){
            return "normal";
        }
        else{
            return "tall";
        }
    }
    else if (S=='F'){
        if (height<160){
            return "short";
        }
        else if (height>=160 and height<175){
            return "normal";
        }
        else{
            return "tall";
        }
    }
    return "";
    // use return to return your result
    // make use of control flow statements
}