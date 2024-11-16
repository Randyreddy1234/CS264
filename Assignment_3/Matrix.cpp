//
// Created by Randon Reddy on 05/11/2024.
//
#include "Matrix.h"
#include <iostream>
#include <stdexcept>
//defining class methods in.cpp file

/*Matrix constructor that takes two int in, m & n, and initializes a matrix m x m with default values 0*/
Matrix ::Matrix(unsigned  int m, unsigned int n) {
    rowsV = m;
    columnsV = n; /*assigning row and column variables with parameters m & n*/
    matrix = new unsigned int* [rowsV]; /*initialize matrix rows*/

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV]; /*initialize matrix columns*/

        for(int j = 0; j < columnsV; j++){
            matrix[i][j] = 0; /*Assigning default value 0 to each matrix element*/
        }
    }
}

/*Matrix constructor that copies a matrix into a new matrix*/
Matrix ::Matrix(const Matrix &mat) { //takes another matrix in through parameter
    rowsV = mat.rowsV;
    columnsV = mat.columnsV; /*assigning row and column variables with mat's m & n*/
    matrix = new unsigned int* [rowsV]; /*initialize matrix rows*/

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV]; /*initialize matrix columns*/

        for(int j = 0; j < columnsV; j++){
            matrix[i][j] = mat.matrix[i][j]; /*copy values in mat into new matrix*/
        }
    }
}

/*Matrix constructor that initialize a new matrix from a 2D array with size m & n*/
Matrix ::Matrix(int **array, unsigned int m, unsigned int n) { //takes 2D array, size of 2D array m x n as parameters
    rowsV = m;
    columnsV = n; /*assigning row and column variables with parameters m & n*/
    matrix = new unsigned int*[rowsV]; /*initialize matrix rows*/

    for(int i = 0; i < rowsV; i++){
        matrix[i] = new unsigned int[columnsV]; /*initialize matrix columns*/

        for(int j = 0; j < columnsV; j++){
                matrix[i][j] = array[i][j]; /*Copying array element into matrix*/
        }
    }
}

/*Getter to return number of rows for matrix*/
unsigned int Matrix ::rows() const {
    return rowsV; //returning number of rows
}

/*Getter to return number of columns for matrix*/
unsigned int Matrix ::columns() const {
    return columnsV; //returning number of columns
}

/*Get value in matrix position i x j*/
int Matrix ::get(unsigned int i, unsigned int j) const { //takes in value to return at position i x j
    return matrix[i][j]; //return value in matrix at i x j
}

/*Set value in matrix at position i x j*/
void Matrix ::set(unsigned int i, unsigned int j, int value) { //takes location in matrix i x j and value to set it to
    matrix[i][j] = value; //set value in matrix at i x j
}

/*Operator overload of + for addition of matrices*/
Matrix Matrix::operator+(const Matrix &mat) { //takes another matrix in as a parameter
    if(mat.rowsV != rowsV || mat.columnsV != columnsV){ //condition statement to check if matrices are the same size
        //throw std::invalid_argument("Matrices must be of the same size to perform matrix addition.");
        std::cerr << "Error: Matrices must be of the same size to perform matrix addition." << std::endl; //if not, will display an error message
        return Matrix(0,0); //returns matrix size of 0 x 0
    }else{
        Matrix add(rowsV,columnsV); // creates matrix object and uses constructor to initialize matrix
        add.matrix = new unsigned int * [rowsV]; //initialize matrix rows
        for(int i = 0; i < rowsV; i++){
            add.matrix[i] = new unsigned int [columnsV]; //initialize matrix columns
            for(int j = 0; j < columnsV; j++){
                add.matrix[i][j] = matrix[i][j] + mat.matrix[i][j]; //adds matrix elements at i x j in both matrices and stores in new matrix
            }
        }
        return add; // returns new matrix from result of addition
    }
}

/*Operator overload of - for subtraction of matrices*/
Matrix Matrix::operator-(const Matrix &mat) { //takes another matrix in as a parameter
    if(mat.rowsV != rowsV || mat.columnsV != columnsV){ //condition statement to check if matrices are the same size
        //throw std::invalid_argument("Matrices must be of the same size to perform matrix addition.");
        std::cerr << "Error: Matrices must be of the same size to perform matrix subtraction." << std::endl; //if not, will display an error message
        return Matrix(0,0); //returns matrix size of 0 x 0
    }else{
        Matrix sub(rowsV,columnsV); // creates matrix object and uses constructor to initialize matrix
        sub.matrix = new unsigned int * [rowsV]; //initialize matrix rows
        for(int i = 0; i < rowsV; i++){
            sub.matrix[i] = new unsigned int [columnsV]; //initialize matrix columns
            for(int j = 0; j < columnsV; j++){
                sub.matrix[i][j] = matrix[i][j] - mat.matrix[i][j]; //subtracts matrix elements at i x j in both matrices and stores in new matrix
            }
        }
        return sub; // returns new matrix from result of subtraction
    }
}

/*Operator overload of * for multiplication of matrices*/
Matrix Matrix::operator*(const Matrix &mat) {
    if(columnsV != mat.rowsV){ //condition statement checks to see if same amount of columns in matrix one as rows in matrix 2
        //throw std::invalid_argument("Matrices must be of the same size to perform matrix addition.");
        std::cerr << "Error: First matrix must have same number of columns as Second matrix's rows." << std::endl; //if not, will display an error message
        return Matrix(0,0); //returns matrix size of 0 x 0
    }else{
        Matrix mult(rowsV,mat.columnsV); // creates matrix object and uses constructor to initialize matrix size rowsV and mat.columnsV

        for (int i = 0; i < rowsV; i++) {
            for (int j = 0; j < mat.columnsV; j++) {
                for (int k = 0; k < columnsV; k++) {
                    mult.matrix[i][j] += matrix[i][k] * mat.matrix[k][j]; //performs matrix multiplication and assigning them to new matrix
                }
            }
        }
        return mult; // returns new matrix from result of multiplication
    }
}

/*Operator overload of ~ for transition of matrix*/
Matrix Matrix::operator~() const {
    Matrix trans(columnsV,rowsV); //creates new matrix object and initialize matrix with rows and columns swapped
    trans.matrix = new unsigned int* [columnsV]; //initialize matrix rows using columnsV
    for(int i = 0; i < columnsV; i++){
        trans.matrix[i] = new unsigned int[rowsV]; //initialize matrix columns using rowsV
        for(int j = 0; j < rowsV; j++){
            trans.matrix[i][j] = matrix[j][i]; //move old element into transposed position in new matrix
        }
    }
    return trans; //return transposed matrix
}

/*Operator overload of == for equality of matrices*/
bool Matrix::operator==(const Matrix &mat) { //takes another matrix in as a parameter
    if(mat.rowsV == rowsV && mat.columnsV == columnsV){ //first checks to see if both matrices the same size
        bool equal = true; // creates boolean variable to track if they are the same

        for(int i = 0; i < rowsV; i++){
            for(int j = 0; j < columnsV; j++){ //for loops looping through matrices
                if(matrix[i][j] != mat.matrix[i][j]){ // checks if element at i x j in both matrices are equal
                    equal = false; //if not assign false to boolean variable
                }
            }
        }
        return equal; //return boolean variable
    }else{
        return false; //if not the same size return false
    }
}

/*Method to display string representation of matrix*/
std::string Matrix::toStr() const {
    std::string stringMatrix = ""; //create empty matrix

    for(int i = 0; i < rowsV; i++){
        for(int j = 0; j < columnsV; j++){
            stringMatrix = stringMatrix + std::to_string(matrix[i][j]) + " ";; //loops through matrix row by row and concats to string
        }
        stringMatrix = stringMatrix + "\n"; //adds new line at the end of the row
    }
    return stringMatrix; //return string representation
}

/*Destructor - so safely deallocate memory after matrix is used*/
Matrix::~Matrix() {
    for (int i = 0; i < rowsV; ++i) {
        delete matrix[i]; //deletes values in matrix
    }
    std :: cout << "Matrix destroyed" << std :: endl;
    delete [] matrix; //deletes matrix
}