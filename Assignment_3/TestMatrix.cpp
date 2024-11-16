//
// Created by Randon Reddy on 05/11/2024.
//
#include "iostream"
#include "Matrix.h"
using namespace std;

void Matrix_Creation_test_case_1(){


    cout << "####################################################################" << endl;
}

int main(){
    Matrix A(2,3);
    Matrix B(2,3);
    A.set(1,1,26);
    A.set(1,0,50);
    B.set(1,1,26);

    int** arr =  new int* [3];
    for(int i = 0; i < 3; i++){
        arr[i] = new int [2];
    }

    arr[0][1] = 3;
    arr[2][1] = 26;


    Matrix C(arr,3,2);

    std::cout << "Matrix A" << std::endl;
    std::cout << A.toStr() << std::endl;
    std::cout << "Matrix B" << std::endl;
    std::cout << B.toStr() << std::endl;
    std::cout << "Matrix C" << std::endl;
    std::cout << C.toStr() << std::endl;

    Matrix D = ~C;
    std::cout << "Matrix D" << std::endl;
    std::cout << D.toStr() << std::endl;

    Matrix E = A + B;
    Matrix H = A - B;
    Matrix K = A * C;

    Matrix F = A + C;
    Matrix G = A - C;
    Matrix L = C * A;

    std::cout << "Matrix E" << std::endl;
    std::cout << E.toStr() << std::endl;

    std::cout << "Matrix H" << std::endl;
    std::cout << H.toStr() << std::endl;

    std::cout << "Matrix K" << std::endl;
    std::cout << K.toStr() << std::endl;

    std::cout << "Matrix L" << std::endl;
    std::cout << L.toStr() << std::endl;
    return 0;
}