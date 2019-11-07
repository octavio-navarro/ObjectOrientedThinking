#include <iostream>
#include <cmath>

using namespace std;

void dentro_fuera(float p_x, float p_y, float c_x, float c_y, float radio)
{
    float distancia = sqrtf(pow(p_x-c_x, 2) + pow(p_y-c_y, 2));

    // Si solo tienen una línea de código después del if, else if, o else, no es necesario poner corchetes. Se asume que el bloque de código comprende solo esa línea.
    if(distancia > radio)
        cout << "Fuera de la circunferencia" << endl;
    else if(distancia < radio)
        cout << "dentro de la circunferencia"<< endl;
    else
        cout << "Sobre la circunferencia" << endl;
}

int main(void)
{
    // Se puede llamar a una función diréctamente con valores sin tener que usar cin y variables para todo.
    dentro_fuera(5, 5, 3, 4, 6);
    return 0;
}