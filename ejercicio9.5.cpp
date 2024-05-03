#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Ingrese las dimensiones de la primera matriz (filas columnas): ";
    cin >> filas1 >> columnas1;
    cout << "Ingrese las dimensiones de la segunda matriz (filas columnas): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Error: La cantidad de columnas en la primera matriz debe coincidir con la cantidad de filas en la segunda matriz." << endl;
        return 1;
    }

    int mat1[filas1][columnas1], mat2[filas2][columnas2], mat3[filas1][columnas2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "El producto de las dos matrices es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}