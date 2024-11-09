//
// Created by Randon Reddy on 05/11/2024.
//
#include "Matrix.h"
#include <iostream>
//defining class methods in.cpp file

Matrix ::Matrix(unsigned  int m, unsigned int n) {
    rowsV = m;
    columnsV = n;
    matrix = new unsigned int* [rowsV];

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV];

        for(int j = 0; j < columnsV; j++){
            matrix[i][j] = 0;
        }
    }
}

Matrix ::Matrix(const Matrix &mat) {
    rowsV = mat.rowsV;
    columnsV = mat.columnsV;
    matrix = new unsigned int* [rowsV];

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV];

        for(int j = 0; j < columnsV; j++){
            matrix[i][j] = mat.matrix[i][j];
        }
    }
}

Matrix ::Matrix(int **array, unsigned int m, unsigned int n) {
    rowsV = m;
    columnsV = n;
    matrix = new unsigned int*[rowsV];

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV];

        for(int j = 0; j < columnsV; j++){
                matrix[i][j] = array[i][j];
        }
    }
}

unsigned int Matrix ::rows() const {
    return rowsV; //returning number of rows
}

unsigned int Matrix ::columns() const {
    return columnsV; //returning number of columns
}

int Matrix ::get(unsigned int i, unsigned int j) const {
    return matrix[i][j];
}

void Matrix ::set(unsigned int i, unsigned int j, int value) {
    matrix[i][j] = value;
}

Matrix Matrix::operator+(const Matrix &mat) {

}

Matrix Matrix::operator-(const Matrix &mat) {

}

Matrix Matrix::operator*(const Matrix &mat) {

}

Matrix Matrix::operator~() const {
    Matrix trans(columnsV,rowsV);
    trans.matrix = new unsigned int* [columnsV];
    for(int i = 0; i < columnsV; i++){
        trans.matrix[i] = new unsigned int[columnsV];
        for(int j = 0; j < rowsV; j++){
            trans.matrix[i][j] = matrix[j][i];
        }
    }
    return trans;
}

bool Matrix::operator==(const Matrix &mat) {

}

std::string Matrix::toStr() const {
    std::string stringMatrix = "";

    for(int i = 0; i < rowsV; i++){
        for(int j = 0; j < columnsV; j++){
            stringMatrix = stringMatrix + std::to_string(matrix[i][j]) + " ";;
        }
        stringMatrix = stringMatrix + "\n";
    }
    return stringMatrix;
}

Matrix::~Matrix() {
    for (int i = 0; i < rowsV; ++i) {
        delete matrix[i];
    }
    std :: cout << "Matrix destroyed" << std :: endl;
    delete [] matrix;
}