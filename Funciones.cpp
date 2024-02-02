#include <iostream>
#include <cmath> // Necesario para la funci�n pow()

using namespace std;

// Definir la funci�n calcularPotencia
double calcularPotencia(double base, int exponente) {
    // Manejar casos donde el exponente sea cero o negativo
    if (exponente == 0) {
        return 1.0; // Cualquier n�mero elevado a la potencia 0 es 1
    } else if (exponente < 0) {
        return 1.0 / pow(base, abs(exponente)); // Manejar exponentes negativos
    } else {
        return pow(base, exponente);
    }
}

int main() {
    // Solicitar al usuario la base y el exponente
    double base;
    int exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Llamar a la funci�n calcularPotencia y mostrar el resultado
    double resultado = calcularPotencia(base, exponente);
    cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}

