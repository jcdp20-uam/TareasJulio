#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Ingrese el numero de filas y columnas de la matriz: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int transposed[cols][rows];
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}