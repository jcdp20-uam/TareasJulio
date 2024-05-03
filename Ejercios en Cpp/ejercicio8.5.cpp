#include <iostream>
using namespace std;

int main() {
    int vect_A[3], vect_B[3];
    int dot_product = 0;

    cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> vect_A[i];
    }

    cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < 3; i++) {
        cin >> vect_B[i];
    }

    for (int i = 0; i < 3; i++) {
        dot_product += vect_A[i] * vect_B[i];
    }

    cout << "Producto punto: " << dot_product << endl;

    return 0;
}