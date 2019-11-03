#include <iostream>

using namespace std;

int main(void)
{
    string nombre = "";
    int edad = 0;

    cout << "Dame tu nombre: ";
    cin >> nombre;

    cout << "Dame tu edad: ";
    cin >> edad;

    cout << "Hola " << nombre << " en 20 anios tendras " << edad+20 << endl;

    return 0;
}