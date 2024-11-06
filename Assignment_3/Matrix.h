// Created by Randon Reddy on 05/11/2024.
#ifndef CS264_MATRIX_H
#define CS264_MATRIX_H

class Matrix {
    public:
        Matrix(unsigned int m, unsigned int n);
        Matrix(const Matrix &mat);
        Matrix(int** array, unsigned int m, unsigned int n);
        const unsigned int rows();

};


#endif //CS264_MATRIX_H
