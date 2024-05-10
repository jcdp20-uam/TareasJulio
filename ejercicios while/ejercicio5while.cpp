#include <iostream>

using namespace std;

int main() {
    const int num_estudiantes = 8;
    double nota, suma = 0;
    int aprobados = 0, reprobados = 0;
    int i = 1; // Inicializamos el contador

    cout << "Ingrese las notas de los " << num_estudiantes << " estudiantes:" << endl;
    while (i <= num_estudiantes) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
        i++; // Incrementamos el contador
    }

    double promedio = suma / num_estudiantes;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
