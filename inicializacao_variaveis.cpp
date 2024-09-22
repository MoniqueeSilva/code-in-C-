// INICIALIZAÇÃO DE VARIÁVEIS
#include <iostream>
using namespace std;

int main(){
    int a = 5;  //Valor inicial: 5
    int b (3);  //Valor inicial: 3
    int c {2};  //Valor inicial: 2
    int result; //Valor inicial indeterminado(subtração)

    a = a + b;
    result = a - c;
    cout << result;
    
    return 0;
}