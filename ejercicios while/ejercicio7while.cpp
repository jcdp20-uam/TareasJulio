#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud), suma(longitud);

    cout << "Ingrese los elementos del primer vector:" << endl;
    int i = 0;
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
        i++;
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    i = 0; // Reiniciamos el contador
    while (i < longitud) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
        i++;
    }

    // Suma de los dos vectores
    i = 0; // Reiniciamos el contador
    while (i < longitud) {
        suma[i] = vector1[i] + vector2[i];
        i++;
    }

    // Mostramos el vector suma
    cout << "La suma de los dos vectores es:" << endl;
    for (int j = 0; j < longitud; j++) {
        cout << suma[j] << " ";
    }
    cout << endl;

    return 0;
}
