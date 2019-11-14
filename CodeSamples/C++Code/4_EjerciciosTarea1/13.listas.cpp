#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int cuentaPares(int numeros[], int tamanio)
{
    int cuenta = 0;
    for(int idx = 0; idx < tamanio; idx++)
    {
        if(numeros[idx] % 2 == 0)
            cuenta++;
    }

    return cuenta;
}

int cuentaImpares(int numeros[], int tamanio)
{
    int cuenta = 0;
    for(int idx = 0; idx < tamanio; idx++)
    {
        if(numeros[idx] % 2 != 0)
            cuenta++;
    }

    return cuenta;
}

int main(void)
{
    int terminos = 10;
    int numeros[terminos] = {0};

    srand(time(0));

    for(int idx = 0; idx < terminos; idx++)
        numeros[idx] = 1 + rand() % 20;

    cout << "Tu lista es: ";
    for(int idx = 0; idx < terminos; idx++)
        cout << numeros[idx] << " ";

    cout << endl;

    cout << "Pares en la lista: " << cuentaPares(numeros, terminos) << endl;
    cout << "Impares en la lista: " << cuentaImpares(numeros, terminos) << endl;

    return 0;
}