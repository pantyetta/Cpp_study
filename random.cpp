#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Omikuji
{
private:
    int un;
public:
    Omikuji();
    void hiku();
};

Omikuji::Omikuji()
{
    srand((unsigned)time(NULL));
    cout << "plz write your lucky number. (1-5)\n";
    cin >> un;
}

void Omikuji::hiku()
{
    int x; 
    x = rand() % 5 + 1;
    cout << "your fortune is ";
    if(x == un)
        cout << "very good.\n";
    else
        cout << "soso.\n";
}


int main(){
    Omikuji today;
    today.hiku();
}