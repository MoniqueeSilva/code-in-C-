//LOOP FOR RANGE-BASED:
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str {"Hello!"};
    for (char c : str){
        cout << "[" << c << "]";
    }
    cout << "\n";
}