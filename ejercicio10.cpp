#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transponerMatriz(const vector<vector<int>>& matriz) {
    int filas = matriz.size();
    int columnas = matriz[0].size();

    vector<vector<int>> transpuesta(columnas, vector<int>(filas));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    return transpuesta;
}

int main() {
    int filas, columnas;

    cout << "Ingresa el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingresa el numero de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    cout << "Ingresa los elementos de la matriz por filas:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento (" << i << ", " << j << "): ";
            cin >> matriz[i][j];
        }
    }

    vector<vector<int>> transpuesta = transponerMatriz(matriz);

    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < transpuesta.size(); ++i) {
        for (int j = 0; j < transpuesta[i].size(); ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
