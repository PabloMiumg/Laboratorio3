#include <iostream>

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

int main() {
    // Solicitar al usuario ingresar un n�mero
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Utilizar la funci�n esPrimo para determinar si el n�mero es primo o no
    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}

