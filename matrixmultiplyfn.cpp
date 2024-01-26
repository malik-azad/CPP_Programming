#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

// Function to input a matrix
void inputMatrix(int matrix[][MAX_COLS], int &rows, int &cols) {
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(const int A[][MAX_COLS], int rowsA, int colsA, const int B[][MAX_COLS], int rowsB, int colsB, int C[][MAX_COLS]) {
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return;
    }

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(const int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS], C[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;

    cout << "Matrix A:" << endl;
    inputMatrix(A, rowsA, colsA);

    cout << "Matrix B:" << endl;
    inputMatrix(B, rowsB, colsB);

    cout << "Matrix A:" << endl;
    displayMatrix(A, rowsA, colsA);

    cout << "Matrix B:" << endl;
    displayMatrix(B, rowsB, colsB);

    multiplyMatrices(A, rowsA, colsA, B, rowsB, colsB, C);

    cout << "The Multiplication of Matrix A and B :" << endl;
    displayMatrix(C, rowsA, colsB);

    return 0;
}
