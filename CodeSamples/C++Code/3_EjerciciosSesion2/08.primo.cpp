#include <iostream>

using namespace std;

// Las funciones pueden regresar cualquier tipo de dato. En este caso, regresa un bool.
bool primo(int numero)
{
    int contador = 2;

    if (numero <= 1)
        return false;
    
    while(contador < numero)
    {
        if(numero % contador == 0)
            return false;
        contador++;
    }

    return true;
}

int main(void)
{
    int numero = 0;
    cout << "Dame un numero: ";
    cin >> numero;
    if(primo(numero))
    {
        cout << "Es primo" << endl;
    }
    else
    {
        cout << "No es primo" << endl;
    }
    
    return 0;
}