//OPERADORES DE ENDEREÇO E PONTEIRO
#include <iostream>
using namespace std;

int main() {
    int var = 20;   // variável normal
    int *ptr;       // declaração de um ponteiro

    ptr = &var;     // `ptr` agora armazena o endereço de `var`

    cout << "Valor de var: " << var << endl;
    cout << "Endereço de var (&var): " << &var << endl;
    cout << "Valor do ponteiro ptr: " << ptr << endl;
    cout << "Valor apontado por ptr (*ptr): " << *ptr << endl;

    return 0;
}