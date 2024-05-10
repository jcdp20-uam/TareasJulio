#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las matrices no son compatibles para la multiplicacion." << endl;
        return 1;
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    int i = 0;
    while (i < filas1) {
        int j = 0;
        while (j < columnas1) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    i = 0; // Reiniciamos el contador
    while (i < filas2) {
        int j = 0;
        while (j < columnas2) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    // Multiplicacion de matrices
    i = 0; // Reiniciamos el contador
    while (i < filas1) {
        int j = 0;
        while (j < columnas2) {
            int k = 0;
            while (k < columnas1) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    // Mostramos la matriz resultante
    cout << "La matriz resultante de la multiplicacion es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
