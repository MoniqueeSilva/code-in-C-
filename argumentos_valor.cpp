#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

void funcaoValor(int x){
    x *= 2;
    cout << "Valor dentro da função: " << x << "\n";
}

int main(){
    int num = 5;
    funcaoValor(num);
    cout << "Valor original: " << num << "\n";
    return 0;
}
