//STRINGSTREAMS
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string mystr;
    float preco = 0;
    int quantidade = 0;

    cout << "Digite o preço: ";
    getline (cin, mystr);
    stringstream(mystr) >> quantidade;
    cout << "Total: " << preco * quantidade << endl;
    return 0;
}