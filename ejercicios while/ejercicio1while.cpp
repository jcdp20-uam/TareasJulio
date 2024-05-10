#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero natural n: ";
    cin >> n;

    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
