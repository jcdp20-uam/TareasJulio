#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa un numero natural: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
