#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void juegoAdivinar(int intentos)
{
    srand(time(0));
    int numero = rand() % 10;
    int intento = 0;

    for(int i = 0; i < intentos; i++)
    {
        cout << "Tienes " << intentos - i << "intentos." << endl;
        cout << "Adivina un número entre 0 y 10: ";
        cin >> intento;

        if(intento == numero)
        {
            cout << "Adiviniaste!" << endl;
            return;
        }
        else
        {
            cout << "Fallaste!" << endl;
            if(intento < numero)
                cout << "El número que elegiste es menor al que buscas..." << endl;
            else
                cout << "El número que elegiste es mayor al que buscas..." << endl;
        }
        
    }
}

int main(void)
{
    juegoAdivinar(5);
    return 0;
}