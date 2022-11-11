// classNeko_remake.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;
public:
    Neko(string s) : name(s){}
    void naku() const{
        cout << "I'm " << name << " nya!" << endl;
    }
};

int main(){
    string s;
    cout << "Please cat name" << endl;
    cin >> s;
    Neko dora(s);
    cout << "Your named cat has been generated in memory." << endl;
    cout << "Cat purrs!" << endl;

    dora.naku();
}