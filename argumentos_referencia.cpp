#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void valorReferencia(int& x){
    x *=2;
}

int main(){
    int num = 5;
    valorReferencia(num);
    cout << "Valor original (alterado): " << num << "\n";
    return 0;
}