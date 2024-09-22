//OPERADOR CONDICIONAL TERNÁRIO:
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    int max = (a > b) ? a : b;

    cout << "O maior valor é: " << max << endl;

    return 0;
}