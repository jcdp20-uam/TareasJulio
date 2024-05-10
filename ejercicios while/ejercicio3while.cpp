#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    int i = 1;
    while (i <= 100) {
        suma += i * i; // Agrega el cuadrado del numero actual a la suma
        i++; // Incrementa el contador
    }

    cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;

    return 0;
}
