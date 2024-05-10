#include <iostream>

using namespace std;

int main() {
    cout << "Numeros impares en orden descendente entre 1 y 100:" << endl;
    int i = 99; // Comenzamos en 99 para empezar con el numero impar mas grande menor o igual a 100
    while (i >= 1) {
        cout << i << " ";
        i -= 2; // Restamos 2 para pasar al siguiente número impar
    }
    cout << endl;

    return 0;
}
