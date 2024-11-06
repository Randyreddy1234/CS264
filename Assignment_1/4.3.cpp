// Created by Randon Reddy on 28/09/2024.
#include <iostream>
#include <string>

int main(){
    std::string in,reverse; //initializing variables
//    std::cout << "Enter a number:";
    std::cin >> in; //reading in number

    for(int i = 0; i < in.length();i++){ //creating the reverse of inputted number
        reverse = in.substr(i,1) + reverse;
    }

    if(in == reverse){ //if statement checking if the two words are the same (could also use the compare function but chose this way)
        std::cout << "true" << std::endl; //output true or false depending
    }else{
        std::cout << "false" << std::endl;
    }
}