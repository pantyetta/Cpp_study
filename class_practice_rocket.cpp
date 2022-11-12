// class_practice_rocket.cpp

#include <iostream>
using namespace std;

class Rocket{
    int fuel;
    int speed;
public:
    Rocket(int);
    void kasoku();
};

Rocket::Rocket(int x) : fuel(x), speed(0){};
void Rocket::kasoku(){
    if(fuel >= 2){
        speed += 2;
        fuel -= 2;
        cout << "fuel : " << fuel  << endl;
        cout << "speed : " << speed << endl;
    }else{
        cout << "fuel is empty." << endl;
    }
}

int main(){
    cout << "create rocket. please input fuel amount." << endl;
    int n;
    cin >> n;
    Rocket apollo(n);
    cout << "acceleration apollo." << endl;
    apollo.kasoku();
    cout << "acceleration apollo again." << endl;
    apollo.kasoku();
    cout << "finish apollo episode." << endl;
}