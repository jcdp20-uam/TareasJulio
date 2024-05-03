#include <iostream>

using namespace std;

int main() {
    const int numEstudiantes = 8;
    float notas[numEstudiantes];
    float suma = 0;
    int aprobados = 0;
    int reprobados = 0;

    for (int i = 0; i < numEstudiantes; ++i) {
        cout << "Ingresa la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];

        if (notas[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    float promedio = suma / numEstudiantes;

    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
