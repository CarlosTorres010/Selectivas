/*En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los 
S/.1000 �Cu�l ser� la cantidad que pagara una persona por su compra?*/


#include <iostream>
using namespace std;
int main() {
    int n;
    double p, siuuuu, descuentito, money;

    cout << "Ingrese la cantidad de ropa que va a comprar: ";
	cin >> n; /*Esta es la primera variable entero*/

    cout << "Ingrese el precio por la ropa que va a comprar: ";
	cin >> p; /*Esta es la segunda variable entera*/

    siuuuu = p * n;

    if (n >= 3) {
        descuentito = siuuuu * 0.20;  
    } else {
        descuentito = siuuuu * 0.10;  
    }

    money = siuuuu - descuentito;

    cout << "El total que usted va a cancelar es: $" << money << endl;

    return 0;
}
