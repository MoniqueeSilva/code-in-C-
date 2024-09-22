//OPERADORES DE ATRIBUIÇÃO:
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;

    a += b; // equivalente a a = a + b
    cout << "a += b: " << a << endl;

    a -= b; // equivalente a a = a - b
    cout << "a -= b: " << a << endl;

    a *= b; // equivalente a a = a * b
    cout << "a *= b: " << a << endl;

    a /= b; // equivalente a a = a / b
    cout << "a /= b: " << a << endl;

    a %= b; // equivalente a a = a % b
    cout << "a %= b: " << a << endl;

    return 0;
}