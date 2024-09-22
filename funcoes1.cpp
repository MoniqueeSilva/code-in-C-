// EXEMPLO 1 DE FUNÇÕES

#include <iostream>
using namespace std;

int adicionar (int a, int b){
    int r;
    r = a + b;
    return r;
}

int main(){
    int z;
    z = adicionar (5, 3);
    cout << "O resultado é: " << z;
}