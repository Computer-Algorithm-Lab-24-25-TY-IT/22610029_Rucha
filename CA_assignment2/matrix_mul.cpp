#include <iostream>
using namespace std;

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowFirst, columnFirst, rowSecond, columnSecond;
    
    cout << "Enter rows and columns for first matrix: ";
    cin >> rowFirst >> columnFirst;
    
    cout << "Enter rows and columns for second matrix: ";
    cin >> rowSecond >> columnSecond;

    if (columnFirst != rowSecond) {
        cout << "Error! Column of first matrix is not equal to row of second matrix.";
        return 0;
    }

    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            cin >> firstMatrix[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            cin >> secondMatrix[i][j];
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    cout << "Resultant Matrix: " << endl;
    displayMatrix(result, rowFirst, columnSecond);

    return 0;
}
