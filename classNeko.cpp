// classNeko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
    string name;
public:
    Neko(string s){
        name = s;
    }
    void naku(){
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