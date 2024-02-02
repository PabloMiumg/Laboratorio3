#include <iostream>

using namespace std;

int main() {
    // 	Se pide al usuario dos números enteros
    int numero1, numero2;
    cout << "Ingrese el primer numero entero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> numero2;

    // Se realizan las operaciones aritméticas
    int suma = numero1 + numero2;
    int resta = numero1 - numero2;
    int multiplicacion = numero1 * numero2;

    // Se maneja la división por cero
    double division;
    if (numero2 != 0) {
        division = static_cast<double>(numero1) / numero2;
    } else {
        cout << "No se puede dividir por cero." << endl;
        return 1;  // Salir del programa con código de error
    }

    // Se utiliza operadores de relación y almacenar resultados
    bool igual = numero1 == numero2;
    bool mayor_que = numero1 > numero2;
    bool menor_que = numero1 < numero2;

    // Ya se presenta los resultados al usuario
    cout << "\nResultados para " << numero1 << " y " << numero2 << ":\n";
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;

    // Se presentan los resultados de comparacion
    cout << "\nComparaciones:\n";
    cout << "Igual: " << (igual ? "verdadero" : "falso") << endl;
    cout << "Mayor que: " << (mayor_que ? "verdadero" : "falso") << endl;
    cout << "Menor que: " << (menor_que ? "verdadero" : "falso") << endl;


    return 0;  // Se sale del programa
}


