#include <iostream>

using namespace std;

// Funci�n para determinar si un a�o es bisiesto
bool esBisiesto(int year) {
    // Un a�o es bisiesto si es divisible por 4
    // Pero los a�os divisibles por 100 son bisiestos solo si son divisibles por 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    // Solicitar al usuario ingresar un a�o
    int year;
    cout << "Ingrese un anio: ";
    cin >> year;

    // Utilizar la funci�n esBisiesto para determinar si el a�o es bisiesto o no
    if (esBisiesto(year)) {
        cout << year << " es un anio bisiesto." << endl;
    } else {
        cout << year << " no es un anio bisiesto." << endl;
    }

    return 0;
}



