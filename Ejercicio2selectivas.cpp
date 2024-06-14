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
