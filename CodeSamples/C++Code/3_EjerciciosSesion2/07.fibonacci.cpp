#include <iostream>

using namespace std;

void fibonacci(int terminos)
{
    int anterior = 0;
    int actual = 1;
    int contador = 1;
    int siguiente = 0;
    cout << anterior << " ";

    while(contador < terminos)
    {
        cout << actual << " ";
        siguiente = actual + anterior;
        anterior = actual;
        actual = siguiente;
        contador++;
    }
    cout << endl;
}

int main(void)
{
    fibonacci(10);
    return 0;
}