#include <iostream>

using namespace std;

int main() {
    int numero = 100;
    int suma = 0;

    while (numero <= 200) {
        if (numero % 2 == 0) {
            suma += numero;
        }
        numero++;
    }

    cout << "La suma de los numeros pares entre 100 y 200 es: " << suma << endl;

    return 0;
}
