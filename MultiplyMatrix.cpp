#include <iostream>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

int main() {
    int A[MAX_ROWS][MAX_COLS], B[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;

    // Input dimensions of the first matrix (A)
    cout << "Enter the number of rows and columns for matrix A: ";
    cin >> rowsA >> colsA;

    // Input elements of the first matrix (A)
    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> A[i][j];
        }
    }

    // Input dimensions of the second matrix (B)
    cout << "Enter the number of rows and columns for matrix B: ";
    cin >> rowsB >> colsB;

    // Input elements of the second matrix (B)
    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> B[i][j];
        }
    }

    // Check if matrices can be multiplied
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible. The number of columns in A must be equal to the number of rows in B." << endl;
        return 1; // Exit with an error code
    }

    // Initialize the result matrix to zeros
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
