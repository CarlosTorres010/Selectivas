/*En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los 
S/.1000 �Cu�l ser� la cantidad que pagara una persona por su compra?*/

#include <iostream>
using namespace std;
int main() {
    int c;
    double p, s, d, t;

    cout << "Ingrese la cantidad de camisas: ";
	cin >> c;

    cout << "Ingrese el precio por camisa: ";
	cin >> p;

    s = c * p;

    if (c >= 3) {
        d = s * 0.20;  
    } else {
        d = s * 0.10;  
    }

    t = s - d;

    cout << "El total a pagar es: $" << t << endl;

    return 0;
}
