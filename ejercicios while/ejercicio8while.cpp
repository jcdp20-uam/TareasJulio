#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud), vector2(longitud);

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

    // Calculamos el producto punto
    int producto_punto = 0;
    i = 0; // Reiniciamos el contador
    while (i < longitud) {
        producto_punto += vector1[i] * vector2[i];
        i++;
    }

    // Mostramos el resultado
    cout << "El producto punto de los dos vectores es: " << producto_punto << endl;

    return 0;
}
