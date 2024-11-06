// Created by Randon Reddy on 27/09/2024.
#include <iostream>

int main(){
    int num,reverse = 0; //initializing variables
    std::cin >> num;

    if(num < 0){ //if num < 0, convert to positive then proceed
        num *= -1;

        while(num > 0){
            reverse = (reverse * 10) + (num % 10); //reverse initialized to 0, is multiplied to add 0 at the end and take remainder of num (from modulo) and add it to reverse
            num /= 10; // dividing by 10 to get rid of digit added to reverse
        }

        reverse *= -1; //change back to negative
    }else{
        while(num > 0){ //same as above but for positive numbers
            reverse = reverse * 10 + num % 10;
            num = num / 10;
        }
    }
    std::cout << reverse << std::endl; //output reverse
}