#include <iostream>

using namespace std;

int main() {
    const int numEstudiantes = 10;
    float notas[numEstudiantes];
    float suma = 0;

    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingresa la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    float promedio = suma / numEstudiantes;
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}