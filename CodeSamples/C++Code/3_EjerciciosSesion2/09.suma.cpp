#include <iostream>

using namespace std;

int main(void)
{
    int numero = 0;
    int suma = 0;

    // El do while es un tipo de while en el que el código se ejecuta antes de revisar la condición.
    do
    {
        cout << "Dame un numero (cero para terminar): ";
        cin >> numero;
        suma += numero;
    } while (numero != 0);
    
    cout << "La suma es: " << suma<< endl;
    return 0;
}