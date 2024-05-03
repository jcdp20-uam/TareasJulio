#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int filas2 = matriz2.size();
    int columnas2 = matriz2[0].size();

    if (columnas1 != filas2) {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return {};
    }

    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            for (int k = 0; k < columnas1; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() { 
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingresa el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingresa el numero de columnas de la primera matriz: ";
    cin >> columnas1;
    cout << "Ingresa el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingresa el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicacion." << endl;
        return 1;
    }

    vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
    vector<vector<int>> matriz2(filas2, vector<int>(columnas2));

    cout << "Ingresa los elementos de la primera matriz por filas:" << endl;
    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas1; ++j) {
            cout << "Elemento (" << i << ", " << j << "): ";
            cin >> matriz1[i][j];
  
}
 }