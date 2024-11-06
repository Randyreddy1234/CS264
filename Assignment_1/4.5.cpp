// Created by Randon Reddy on 28/09/2024.
#include <iostream>

void powerOfTwo(int n); //function declaration of powerOfTwo

int main(){
    int num; //variable initialization

    /*std::cout << "Enter a number (num >= 0): ";*/ std::cin >> num; //variable propagation
    if(num >= 0){
        powerOfTwo(num); //if meets condition pass variable into function
    }else{
        std::cout << "Invalid number" << std::endl; //else output invalid input warning
    }

}

void powerOfTwo(int n){ //function definition of powerOfTwo (originally had this as a bool function but returns 0 and 1 for values and would be easier this way)
    bool isPowerOfTwo = true; //boolean variable for while loop
    while(n >= 2 && isPowerOfTwo == true){ // while loop to keep checking if it will be a power of two as the number decreases in size
        if(n % 2 == 0){ //seeing if is divisible by two
            n /= 2; //halves the number and next iteration of while loop
        }else{
            isPowerOfTwo = false; //make bool false and break out of while loop
        }
    }
    if(isPowerOfTwo == true){ //if statement to output appropriate response depending on bool variable
        std::cout << "true" << std::endl;
    }else{
        std::cout << "false" << std::endl;
    }
}