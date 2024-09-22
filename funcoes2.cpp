// EXEMPLO 2 DE FUNÇÕES:

#include <iostream>
using namespace std;

int subtracao (int a, int b){
    int r;
    r = a - b;
    return r;
}

int main(){
    int x = 5, y = 3, z;
    z = subtracao (7, 2);
    cout << "O primeiro resultado é: " << z << '\n';
    cout << "O segundo resultado é: " << subtracao (7, 2) << '\n';
    cout << "O terceiro resultado é: " << subtracao (x, y) << '\n';
    z = 4 + subtracao (x, y);
    cout << "O quarto resultado é: " << z << '\n';
}