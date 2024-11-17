//
// Created by Randon Reddy on 05/11/2024.
//
#include "iostream"
#include "Matrix.h"
#include <cstdlib>

using namespace std;

void Test_case_1_Matrix_default_constructor(){
    unsigned m = 3;
    unsigned n = 4;

    Matrix matrixA(m,n);

    bool isValid = true;
    //checks to see if matrix size correctly initialize
    if (matrixA.rows() != m || matrixA.columns() != n) {
        cout << "Matrix_Creation_test_case_1 failed: Matrix dimensions are incorrect.\n";
        isValid = false;
    }

    // Validate that all elements are initialized to 0
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (matrixA.get(i, j) != 0) {
                cout << "Matrix_Creation_test_case_1 failed: Matrix element at (" << i << ", " << j << ") is not 0.\n";
                isValid = false;
            }
        }
    }

    // Display test result
    if (isValid) {
        cout << "Matrix_Creation_test_case_1 passed: Matrix created and initialized correctly "
                "using Matrix(unsigned  int m, unsigned int n).\n";
    }
}

void Test_case_1_Matrix_copy_Constructor(){
    // Create an original matrix with specific dimensions
    unsigned int m = 3; // Rows
    unsigned int n = 4; // Columns
    Matrix originalMatrix(m, n);

    // Populate the original matrix with values
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            originalMatrix.set(i, j, rand() % 101); // Assign random number between 0-100
        }
    }

    // Create a copy of the original matrix using the copy constructor
    Matrix copiedMatrix(originalMatrix);

    // Validate that the copied matrix has the same dimensions
    bool isValid = true;
    if (copiedMatrix.rows() != originalMatrix.rows() || copiedMatrix.columns() != originalMatrix.columns()) {
        cout << "Matrix_copy_Constructor_test_case_1 failed: Copied matrix dimensions do not match the original.\n";
        isValid = false;
    }

    // Validate that the values in the copied matrix are identical to the original
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (copiedMatrix.get(i, j) != originalMatrix.get(i, j)) {
                cout << "Matrix_copy_Constructor_test_case_1 failed: Copied matrix element at (" << i << ", " << j<< ") does not match the original.\n";
                isValid = false;
            }
        }
    }

    // Validate that the copied matrix is independent of the original (i.e. changing original matrix does not impact copied matrix)
    copiedMatrix.set(0, 0, 999); // Modify the copied matrix
    if (originalMatrix.get(0, 0) == copiedMatrix.get(0, 0)) {
        cout << "Matrix_copy_Constructor_test_case_1 failed: Copied matrix is not independent of the original.\n";
        isValid = false;
    }

    // Display test result
    if (isValid) {
        cout << "Matrix_copy_Constructor_test_case_1 passed: Copy constructor works correctly.\n";
    }
}

void Test_Case_1_Matrix_Array_Constructor(){
    unsigned int m = 3; // Rows
    unsigned int n = 4; // Columns

    // Dynamically allocate and populate a 2D array
    int **inputArray = new int*[m];
    for (unsigned int i = 0; i < m; i++) {
        inputArray[i] = new int[n];
        for (unsigned int j = 0; j < n; j++) {
            inputArray[i][j] = rand() % 101; // Assign random values
        }
    }

    // Create a matrix using the array constructor
    Matrix matrix(inputArray, m, n);

    // Validate the dimensions of the matrix
    bool isValid = true;
    if (matrix.rows() != m || matrix.columns() != n) {
        cout << "Matrix_Array_Constructor_Test_Case_1 failed: Matrix dimensions do not match the input array.\n";
        isValid = false;
    }

    // Validate the values in the matrix match the input array
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (matrix.get(i, j) != inputArray[i][j]) {
                cout << "Matrix_Array_Constructor_Test_Case_1 failed: Matrix element at (" << i << ", " << j<< ") does not match the input array.\n";
                isValid = false;
            }
        }
    }

    // Validate that the matrix is independent of the input array
    inputArray[0][0] = 999; // Modify the input array
    if (matrix.get(0, 0) == 999) {
        cout << "Matrix_Array_Constructor_Test_Case_1 failed: Matrix is not independent of the input array.\n";
        isValid = false;
    }

    // Display test result
    if (isValid) {
        cout << "Matrix_Array_Constructor_Test_Case_1 passed: Matrix initialized correctly from array.\n";
    }

    // Clean up dynamically allocated input array
    for (unsigned int i = 0; i < m; i++) {
        delete[] inputArray[i];
    }
    delete[] inputArray;
}

void Test_Case_1_Matrix_getRows(){
    unsigned int m = 5; // Number of rows
    unsigned int n = 3; // Number of columns
    Matrix Matrix(m, n);

    // Validate that the rows() method returns the correct number of rows
    if (Matrix.rows() == m) {
        cout << "Matrix_getRows_Test_Case_1 passed: rows() returned the correct number of rows (" << m << ").\n";
    } else {
        cout << "Matrix_getRows_Test_Case_1 failed: rows() returned " << Matrix.rows() << ", but expected " << m << ".\n";
    }
}

void Test_Case_1_Matrix_getColumns(){
    unsigned int m = 5; // Number of rows
    unsigned int n = 3; // Number of columns
    Matrix Matrix(m, n);

    // Validate that the columns() method returns the correct number of columns
    if (Matrix.columns() == n) {
        cout << "Matrix_getColumns_Test_Case_1 passed: rows() returned the correct number of rows (" << n << ").\n";
    } else {
        cout << "Matrix_getColumns_Test_Case_1 failed: rows() returned " << Matrix.columns() << ", but expected " << n << ".\n";
    }
}

void Test_Case_1_Matrix_get(){
    unsigned int m = 3; // Rows
    unsigned int n = 4; // Columns

    // Create a matrix
    Matrix matrix(m, n);

    // Populate the matrix with known values
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            matrix.set(i, j, i * n + j + 1); // Assign unique values
        }
    }

    // Validate the values returned by get() for each position
    bool isValid = true;
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            int expectedValue = i * n + j + 1; // The expected value at (i, j)
            if (matrix.get(i, j) != expectedValue) {
                cout << "Matrix_get_Test_Case_1 failed: get(" << i << ", " << j << ") returned "<< matrix.get(i, j) << ", expected " << expectedValue << ".\n";
                isValid = false;
            }
        }
    }

    // Display test result
    if (isValid) {
        cout << "Matrix_get_Test_Case_1 passed: get() returned correct values for all positions.\n";
    }
}

void Test_Case_1_Matrix_set(){
    unsigned int m = 3; // Rows
    unsigned int n = 4; // Columns

    // Create a matrix
    Matrix matrix(m, n);

    // Test setting specific values
    bool isValid = true;
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            int testValue = i * n + j + 1; // Unique value for testing
            matrix.set(i, j, testValue); // Set the value at (i, j)

            // Validate that the value was set correctly
            if (matrix.get(i, j) != testValue) {
                cout << "Test_Case_1_Matrix_set failed: set(" << i << ", " << j << ", " << testValue << ") failed.\n";
                cout << "Expected " << testValue << ", but got " << matrix.get(i, j) << ".\n";
                isValid = false;
            }
        }
    }

    // Display test result
    if (isValid) {
        cout << "Test_Case_1_Matrix_set passed: set() method correctly assigned values to all positions.\n";
    }
}

void Test_Case_1_Matrix_add(){
    bool isValid = true;
    unsigned int m = 2, n = 2;
    Matrix mat1(m, n); //defining two matrices with same size
    Matrix mat2(m, n);

    // Populate the matrices with known values
    mat1.set(0, 0, 1);
    mat1.set(1, 0, 3);
    mat1.set(0, 1, 2);
    mat1.set(1, 1, 4);

    mat2.set(0, 0, 5);
    mat2.set(1, 0, 7);
    mat2.set(0, 1, 6);
    mat2.set(1, 1, 8);

    // Perform addition
    Matrix result = mat1 + mat2;

    // Validate the result
    int expected[2][2] = {{6, 8}, {10, 12}};
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (result.get(i, j) != expected[i][j]) {
                cout << "Test_Case_1_Matrix_add failed: Addition of matrices at (" << i << ", " << j << ") returned " << result.get(i, j) << ", expected " << expected[i][j] << ".\n";
                isValid = false;
            }
        }
    }

    if (isValid) {
        cout << "Test_Case_1_Matrix_add passed: Matrix addition operator works as expected.\n";
    }
}

void Test_Case_1_Matrix_subtract(){
    bool isValid = true;
    unsigned int m = 2, n = 2;
    Matrix mat1(m, n); //defining two matrices with same size
    Matrix mat2(m, n);

    // Populate the matrices with known values
    mat1.set(0, 0, 8);
    mat1.set(1, 0, 6);
    mat1.set(0, 1, 7);
    mat1.set(1, 1, 5);

    mat2.set(0, 0, 3);
    mat2.set(1, 0, 1);
    mat2.set(0, 1, 2);
    mat2.set(1, 1, 0);

    // Perform subtraction
    Matrix result = mat1 - mat2;

    // Validate the result
    int expected[2][2] = {{5, 5}, {5, 5}};
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (result.get(i, j) != expected[i][j]) {
                cout << "Test_Case_1_Matrix_subtract failed: Subtraction of matrices at (" << i << ", " << j << ") returned " << result.get(i, j) << ", expected " << expected[i][j] << ".\n";
                isValid = false;
            }
        }
    }

    if (isValid) {
        cout << "Test_Case_1_Matrix_subtract passed: Matrix subtraction operator works as expected.\n";
    }
}

void Test_Case_1_Matrix_multiply(){
    bool isValid = true;
    unsigned int m1 = 2, n1 = 3;
    unsigned int m2 = 3, n2 = 2;

    Matrix mat1(m1, n1); //defining two matrices
    Matrix mat2(m2, n2);

    // Populate the matrices with known values
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);

    mat2.set(0, 0, 7);
    mat2.set(0, 1, 8);
    mat2.set(1, 0, 9);
    mat2.set(1, 1, 10);
    mat2.set(2, 0, 11);
    mat2.set(2, 1, 12);

    // Perform multiplication
    Matrix result = mat1 * mat2;

    // Validate the result
    int expected[2][2] = {{58, 64}, {139, 154}};
    for (unsigned int i = 0; i < m1; i++) {
        for (unsigned int j = 0; j < n2; j++) {
            if (result.get(i, j) != expected[i][j]) {
                cout << "Test_Case_1_Matrix_multiply failed: Multiplication of matrices at (" << i << ", " << j << ") returned " << result.get(i, j) << ", expected " << expected[i][j] << ".\n";
                isValid = false;
            }
        }
    }
    if (isValid) {
        cout << "Test_Case_1_Matrix_multiply passed: Matrix multiplication operator works as expected.\n";
    }
}

void Test_Case_1_Matrix_tranpose(){
    bool isValid = true;
    unsigned int m = 2, n = 3;

    Matrix mat(m, n); //defining matrix

    // Populate the matrices with known values
    mat.set(0, 0, 1);
    mat.set(0, 1, 2);
    mat.set(0, 2, 3);
    mat.set(1, 0, 4);
    mat.set(1, 1, 5);
    mat.set(1, 2, 6);


    // Perform tranposition
    Matrix result = ~mat ;

    // Validate the result
    int expected[3][2] = {{1, 4}, {2, 5}, {3, 6}};
    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < m; j++) {
            if (result.get(i, j) != expected[i][j]) {
                cout << "Test_Case_1_Matrix_tranpose failed: Transposition of matrix at (" << i << ", " << j << ") returned " << result.get(i, j) << ", expected " << expected[i][j] << ".\n";
                cout << mat.toStr() << endl;
                cout << result.toStr() << endl;
                isValid = false;
            }
        }
    }
    if (isValid) {
        cout << "Test_Case_1_Matrix_tranpose passed: Matrix tranposed operator works as expected.\n";
    }
}

void Test_Case_1_Matrix_Equality(){
    // Create an original matrix with specific dimensions
    unsigned int m = 3; // Rows
    unsigned int n = 4; // Columns
    Matrix originalMatrix(m, n);

    // Populate the original matrix with values
    for (unsigned int i = 0; i < m; i++) {
        for (unsigned int j = 0; j < n; j++) {
            originalMatrix.set(i, j, rand() % 101); // Assign random number between 0-100
        }
    }

    // Create a copy of the original matrix using the copy constructor
    Matrix copiedMatrix(originalMatrix);

    if(originalMatrix == copiedMatrix){
        cout << "Test_Case_1_Matrix_Equality passed: Matrix equality operator works as expected.\n";
    }else{
        cout << "Test_Case_1_Matrix_Equality failed: Matrix equality does not find the matrices to be equal.\n";

    }
}

void Test_Case_1_Matrix_to_string(){
    bool isValid = true;

    unsigned int m1 = 2, n1 = 3;
    Matrix mat1(m1, n1);
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);

    string expected = "1 2 3 \n4 5 6 \n";
    string result = mat1.toStr();
    if (result != expected) {
        cout << "Test_Case_1_Matrix_to_string failed: Expected = " << expected << "but got " << result << endl;
        isValid = false;
    }

    if (isValid) {
        cout << "Test_Case_1_Matrix_to_string passed: Matrix toStr() method works as expected.\n";
    }
}


int main(){
    Test_case_1_Matrix_default_constructor();
    cout << "####################################################################\n" << endl;
    Test_case_1_Matrix_copy_Constructor();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_Array_Constructor();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_getRows();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_getColumns();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_get();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_set();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_add();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_subtract();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_multiply();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_tranpose();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_Equality();
    cout << "####################################################################\n" << endl;
    Test_Case_1_Matrix_to_string();
    cout << "####################################################################\n" << endl;


    return 0;
}