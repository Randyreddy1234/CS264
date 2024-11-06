// Created by Randon Reddy on 27/09/2024.
#include <iostream>

int main(){
    int num1, num2, HCF = 1, i; //initializing input number variable, HFC variable and a counter
//    std::cout << "Enter number 1: ";
    std::cin >> num1; //taking inputs in
//    std::cout << "Enter number 2: ";
    std::cin >> num2;

    if(num1 > num2){ //if num1 is greater than num2 then make your bound num2 for efficiency
        while(i <= num2){ //while loop to increment through all numbers below and including the smallest input number
            if(num2 % i == 0 && num1 % i == 0){ //if both numbers have no remainders when divided by counter then number is a factor of both
                HCF = i; //stores current HCF
            }
            i++; //increment counter
        }
    }else{ //the same but if num2 > num1
        while(i <= num1){
            if(num2 % i == 0 && num1 % i == 0){
                HCF = i;
            }
            i++;
        }
    }
    std::cout << HCF << std::endl; //output HCF
}