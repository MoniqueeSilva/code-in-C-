//OPERADORES DE BITS:
#include <iostream>
using namespace std;

int main() {
    unsigned int a = 5;  // 0000 0101 em binário
    unsigned int b = 9;  // 0000 1001 em binário
    
    cout << "a & b: " << (a & b) << endl;  // AND bit a bit
    cout << "a | b: " << (a | b) << endl;  // OR bit a bit
    cout << "a ^ b: " << (a ^ b) << endl;  // XOR bit a bit
    cout << "~a: " << (~a) << endl;        // NOT bit a bit
    cout << "a << 1: " << (a << 1) << endl; // deslocamento à esquerda
    cout << "b >> 1: " << (b >> 1) << endl; // deslocamento à direita

    return 0;
}