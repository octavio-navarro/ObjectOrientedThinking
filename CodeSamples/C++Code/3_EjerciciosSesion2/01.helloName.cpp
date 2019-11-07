#include <iostream>

using namespace std;

// Todo código de c++ tiene una función principal que es el punto de entrada del programa. Garantizen que siempre tienen solo 1 definida.
int main(void)
{
    string nombre = "";
    int edad = 0;

    cout << "Hola C++!" << endl;
    cout << "Dame tu nombre: " << endl;
    cin >> nombre;
    cout << "Dame tu edad: " <<endl;
    cin >> edad;

    cout << "Hola " << nombre << " tu edad en 20 años será: " << edad+20 << endl;

    return 0;
}