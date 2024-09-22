//CIN COM STRINGS
#include <iostream>
#include <string>
using namespace std;

int main(){
    string mystr;
    cout << "What's your name? " ;
    getline(cin, mystr);
    cout << "Hi " << mystr << ".\n";
    cout << "What's your favorite movie? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";

    return 0;
}