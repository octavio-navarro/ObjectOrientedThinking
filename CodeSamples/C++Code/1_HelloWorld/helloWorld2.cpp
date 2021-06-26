#include <iostream>
using namespace std;

void hello(string nombre)
{
    cout << "Hello " << nombre << endl;
}

int main(void)
{
    string nombre = "";
    int edad = 0;
    float estatura = 0.0;

    cout << "Dame tu nombre: ";
    cin >> nombre;

    cout << "Dame tu edad: ";
    cin >> edad;

    cout << "Dame tu estatura: ";
    cin >> estatura;

    hello(nombre);

    cout << " en 20 anios tendras " << edad+20 << ", estatura " << estatura << endl;

    return 0;
}