#include <iostream>
#include <vector>

using namespace std;

int productoPunto(const vector<int>& vector1, const vector<int>& vector2) {
    int resultado = 0;
    for (size_t i = 0; i < vector1.size(); ++i) {
        resultado += vector1[i] * vector2[i];
    }
    return resultado;
}

int main() {
    int longitud;
    cout << "Ingresa la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    cout << "Ingresa los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingresa los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    int resultado = productoPunto(vector1, vector2);
    cout << "El producto punto de los vectores es: " << resultado << endl;

    return 0;
}
