/*En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los 
S/.1000 �Cu�l ser� la cantidad que pagara una persona por su compra?*/

#include <iostream>
using namespace std;
int main() {
    int n;
    double p, siuuuu, descuentito, money;

    cout << "Ingrese la cantidad de camisas: ";
	cin >> n;

    cout << "Ingrese el precio por camisa: ";
	cin >> p;

    siuuuu = p * n;

    if (n >= 3) {
        descuentito = siuuuu * 0.20;  
    } else {
        descuentito = siuuuu * 0.10;  
    }

    money = siuuuu - descuentito;

    cout << "El total a pagar es: $" << money << endl;

    return 0;
}
