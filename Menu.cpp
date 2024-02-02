#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 y 1 no son primos
    }

    // Verificar si el n�mero es divisible por alg�n otro n�mero menor a �l
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false; // Si es divisible, no es primo
        }
    }

    return true; // Si no es divisible por ning�n n�mero, es primo
}

// Funci�n para determinar si un a�o es bisiesto
bool esBisiesto(int year) {
    // Un a�o es bisiesto si es divisible por 4
    // Pero los a�os divisibles por 100 son bisiestos solo si son divisibles por 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Funci�n para calcular la potencia de un n�mero
double calcularPotencia(double base, int exponente) {
    if (exponente == 0) {
        return 1.0; // Cualquier n�mero elevado a la potencia 0 es 1
    } else if (exponente < 0) {
        return 1.0 / pow(base, abs(exponente)); // Manejar exponentes negativos
    } else {
        return pow(base, exponente);
    }
}

int main() {
    int opcion;
    do {
        // Mostrar el men�
        cout << "\nSeleccione una opcion:\n";
        cout << "1. Verificar si un numero es primo.\n";
        cout << "2. Verificar si un anho es bisiesto.\n";
        cout << "3. Calcular potencia de un numero.\n";
        cout << "4. Salir.\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Verificar si un n�mero es primo
                int numero;
                cout << "Ingrese un numero: ";
                cin >> numero;

                if (esPrimo(numero)) {
                    cout << numero << " es un numero primo." << endl;
                } else {
                    cout << numero << " no es un numero primo." << endl;
                }
                break;
            }

            case 2: {
                // Verificar si un a�o es bisiesto
                int year;
                cout << "Ingrese un anio: ";
                cin >> year;

                if (esBisiesto(year)) {
                    cout << year << " es un anio bisiesto." << endl;
                } else {
                    cout << year << " no es un anio bisiesto." << endl;
                }
                break;
            }

            case 3: {
                // Calcular la potencia de un n�mero
                double base;
                int exponente;

                cout << "Ingrese la base: ";
                cin >> base;

                cout << "Ingrese el exponente: ";
                cin >> exponente;

                double resultado = calcularPotencia(base, exponente);
                cout << "El resultado es: " << resultado << endl;
                break;
            }

            case 4:
                // Salir del bucle y del programa
                cout << "Saliendo del programa.\n";
                break;

            default:
                // Opci�n no v�lida
                cout << "Opcion no valida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}

