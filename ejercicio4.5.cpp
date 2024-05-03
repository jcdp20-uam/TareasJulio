#include <iostream>
using namespace std;

int main() {
    int grades[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    cout << "El promedio general de la seccion es: " << sum / 10 << endl;
    return 0;
}