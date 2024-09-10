#include <iostream>
#include "conversor.h"
using namespace std;

int main() {
    double valor;
    int opcion;

    cout << "Seleccionar la conversion que desea realizar:\n";
    cout << "1: Metros a Pies\n";
    cout << "2: Kilogramos a Libras\n";
    cout << "3: Celsius a Fahrenheit\n";
    cout << "Opcion: ";
    cin >> opcion;

    cout << "Ingrese el valor a convertir: ";
    cin >> valor;

    switch(opcion) {
        case 1:
            cout << valor << " metros son: " << metrosAPies(valor) << " pies.\n";
            break;
        case 2:
            cout << valor << " kilogramos son: " << kilogramosALibras(valor) << " libras.\n";
            break;
        case 3:
            cout << valor << " grados Celsius son: " << celsiusAFahrenheit(valor) << " grados Fahrenheit.\n";
            break;
        default:
            cout << "Opcion no valida.\n";
            break;
    }

    return 0;
}
