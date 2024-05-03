#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    cout << "Suma de todos los numeros pares entre 100 y 200: " << sum << endl;
    return 0;
}