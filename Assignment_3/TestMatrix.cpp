//
// Created by Randon Reddy on 05/11/2024.
//
#include "iostream"
#include "Matrix.h"

int main(){
    Matrix A(5,10);
    Matrix B = A;
    std::cout << A.toStr() << std::endl;
    std::cout << B.toStr() << std::endl;

}