#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    if (S=='M'){
        if (height<170){
            return "Short";
        }
        else if (height>=170 and height<185){
            return "Normal";
        }
        else{
            return "Tall";
        }
    }
    else if (S=='F'){
        if (height<160){
            return "Short";
        }
        else if (height>=160 and height<175){
            return "Normal";
        }
        else{
            return "Tall";
        }
    }
    return "";
    // use return to return your result
    // make use of control flow statements
}