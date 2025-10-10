#include <iostream>
#include <string>
using namespace std;

int main()
{
    float kilometros, millas;
    cout << "Ingrese los kilometros: " << endl;
    cin >> kilometros;
    millas = kilometros * 0.621;
    cout << "Las kilometros convertidos a millas son: " << millas;
}
