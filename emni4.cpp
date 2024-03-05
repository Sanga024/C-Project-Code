#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int mat3[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j] + mat3[i][j];
        }
    }
}

void printMatrix(int mat[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << mat[i][j] << " ";
        }
        cout <<endl;
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{12, 13, 14},
                               {15, 16, 17},
                               {18, 19, 20}};

    int matrix2[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int matrix3[ROWS][COLS] = {{101, 104, 107},
                               {102, 105, 108},
                               {103, 106, 109}};

    int resultMatrix[ROWS][COLS];

    addMatrices(matrix1, matrix2, matrix3, resultMatrix);

    cout << "Resultant Matrix:" <<endl;
    printMatrix(resultMatrix);

    return 0;
}

