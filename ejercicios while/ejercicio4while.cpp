#include <iostream>

using namespace std;

int main() {
    int num_estudiantes = 10;
    double nota, suma = 0;
    int i = 1; // Inicializamos el contador

    cout << "Ingrese las notas de los " << num_estudiantes << " estudiantes:" << endl;
    while (i <= num_estudiantes) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        i++; // Incrementamos el contador
    }

    double promedio = suma / num_estudiantes;
    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}
