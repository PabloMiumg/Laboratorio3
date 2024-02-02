#include <iostream>

using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int year) {
    // Un año es bisiesto si es divisible por 4
    // Pero los años divisibles por 100 son bisiestos solo si son divisibles por 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    // Solicitar al usuario ingresar un año
    int year;
    cout << "Ingrese un anio: ";
    cin >> year;

    // Utilizar la función esBisiesto para determinar si el año es bisiesto o no
    if (esBisiesto(year)) {
        cout << year << " es un anio bisiesto." << endl;
    } else {
        cout << year << " no es un anio bisiesto." << endl;
    }

    return 0;
}



