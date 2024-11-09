// Created by Randon Reddy on 05/11/2024.
#ifndef CS264_MATRIX_H
#define CS264_MATRIX_H
#include <iostream>

class Matrix {
    public:
        Matrix(unsigned int m, unsigned int n); //constructor that initialises matrix m x n, every element in is 0
        Matrix(const Matrix &mat); //copy constructor that copies every element from matrix mat
        Matrix(int** array, unsigned int m, unsigned int n); //Initialise current matrix using 2D array with size m x n
        unsigned int rows() const; //Returns number of rows in the matrix
        unsigned int columns() const; //Returns number of columns in the matrix
        int get(unsigned i, unsigned j) const; //Returns element in row i and column j (i and j begin at 0)
        void set(unsigned i, unsigned j, int value); //Update value in ith row & jth column (i and j begin at 0)
        Matrix operator+(const Matrix &mat); //Returns a matrix that contains the results of addition of two matrices.
        Matrix operator-(const Matrix &mat); //Returns a matrix that contains the results of subtraction of two matrices.
        Matrix operator*(const Matrix &mat); //Returns a matrix that contains the results of multiplication of two matrices.
        Matrix operator~() const; //Returns the transpose of current matrix.
        bool operator==(const Matrix &mat); //Returns true(1) if two matrices are the same, otherwise false(0). Two matrices are the same iff they both contain the same element at exact location in each matrix.
        std :: string toStr() const; //Returns a string representation ((showing every element in the matrix)) of the matrix.
};


#endif //CS264_MATRIX_H
