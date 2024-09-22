//OPERADORES DE INCREMENTO/DECREMENTO
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    cout << "i: " << i << endl;
    cout << "i++: " << i++ << endl; // pós-incremento
    cout << "++i: " << ++i << endl; // pré-incremento

    cout << "i--: " << i-- << endl; // pós-decremento
    cout << "--i: " << --i << endl; // pré-decremento

    return 0;
}