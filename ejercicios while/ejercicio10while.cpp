#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));
    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

    cout << "Ingrese los elementos de la matriz:" << endl;
    int i = 0;
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    // Calculamos la transpuesta
    i = 0; // Reiniciamos el contador
    while (i < filas) {
        int j = 0;
        while (j < columnas) {
            transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    // Mostramos la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
