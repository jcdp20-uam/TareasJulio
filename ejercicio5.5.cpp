#include <iostream>
using namespace std;

int main() {
    int grades[8];
    int approved = 0;
    int reprobated = 0;
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
        if (grades[i] >= 70) {
            approved++;
        } else {
            reprobated++;
        }
    }
    cout << "La cantidad de alumnos aprobados es: " << approved << endl;
    cout << "La cantidad de alumnos reprobados es: " << reprobated << endl;
    cout << "El promedio general del grupo es: " << sum / 8 << endl;
    return 0;
}