//
// Created by Randon Reddy on 05/11/2024.
//
#include "iostream"
#include "Matrix.h"

int main(){
    Matrix A(5,10);
    Matrix B = A;
    int** arr =  new int* [3];
    for(int i = 0; i < 3; i++){
        arr[i] = new int [2];
    }

    arr[0][1] = 3;
    arr[2][1] = 26;


    Matrix C(arr,3,2);

    std::cout << A.toStr() << std::endl;
    std::cout << B.toStr() << std::endl;
    std::cout << C.toStr() << std::endl;

    Matrix D = ~C;
    std::cout << D.toStr() << std::endl;

}