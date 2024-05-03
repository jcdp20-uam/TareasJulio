#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Solicitar al usuario que ingrese la longitud de los vectores
    int length;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> length;

    // Inicializar los vectores
    vector<int> vector1(length);
    vector<int> vector2(length);
    vector<int> suma(length);

    // Solicitar al usuario que ingrese los elementos de los vectores
    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < length; i++) {
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < length; i++) {
        cin >> vector2[i];
    }

    // Calcular la suma de los vectores
    for (int i = 0; i < length; i++) {
        suma[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado
    cout << "La suma de los vectores es:\n";
    for (int i = 0; i < length; i++) {
        cout << suma[i] << " ";
    }
    cout << "\n";

    return 0;
}