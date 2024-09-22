//MÁQUINA DE ECO:
#include <iostream>
#include <string>
using namespace std;

int main(){
    string std;
    do{
        cout << "Digite algo: ";
        getline (cin, std);
        cout << "Você digitou: " << std << "\n";
    }
    while (std != "fim");
}