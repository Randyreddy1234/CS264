// Created by Randon Reddy on 28/09/2024.
#include <iostream>

int Pow(int x,int y); //function declaration of Pow

int main(){
    int x,y;
    //std::cout << "Enter x & y:";
    std::cin >> x;
    std::cin >> y;
    std::cout << Pow(x,y) << std::endl;
}

int Pow(int x,int y){ //function declaration of Pow
    int temp; // temp int variable to hold recursive Pow call once to achieve O(Log n)

    if(y == 0){
        return 1; // in recursive call of Pow and y == 0, return 1
    }
    //also takes the divide and conquer approach to achieve O(Log n)
    temp = Pow(x,y/2); //calculates recursive call of Pow once allowing O(Log n) to be achieved
    // halving y in recursive call also allows for O(Log n) to be achieved (divide and conquer method)
    if(y % 2 == 0){ //if y is even only temp^2
        return temp * temp;
    }else{ // if y is odd then x*temp^2
        return x*temp*temp;
    }
        // O(Log y) way
//    if(y % 2 == 0){
//        return Pow(x,y/2) * Pow(x,y/2);
//    }else{
//        return x*Pow(x,y/2)*Pow(x,y/2);
//    }
}