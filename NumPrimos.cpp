#include <iostream>

using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 y 1 no son primos
    }

    // Verificar si el número es divisible por algún otro número menor a él
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            return false; // Si es divisible, no es primo
        }
    }

    return true; // Si no es divisible por ningún número, es primo
}

int main() {
    // Solicitar al usuario ingresar un número
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Utilizar la función esPrimo para determinar si el número es primo o no
    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}

