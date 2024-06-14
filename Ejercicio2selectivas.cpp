#include <iostream>
using namespace std;

int main() {
    int cantidadCamisas;
    double precioPorCamisa, subtotal, descuento, total;

    cout << "Ingrese la cantidad de camisas: "; cin >> cantidadCamisas;

    cout << "Ingrese el precio por camisa: "; cin >> precioPorCamisa;

    subtotal = cantidadCamisas * precioPorCamisa;

    if (cantidadCamisas >= 3) {
        descuento = subtotal * 0.20;  
    } else {
        descuento = subtotal * 0.10;  
    }

    total = subtotal - descuento;

    cout << "El total a pagar es: $" << total << endl;

    return 0;
}
