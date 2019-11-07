#include <iostream>
#include <cmath>

using namespace std;

void bmi(float altura, float peso)
{
    float indice = 0;
    indice = peso / pow(altura, 2);

    if(indice < 20)
    {
        cout << "Peso bajo."<< endl;
    }
    else if(indice < 25)
    {
        cout << "Normal."<< endl;
    }
    else if(indice < 30)
    {
        cout <<"Sobre peso " <<endl;
    }
    else if(indice < 40)
    {
        cout <<"Obesidad " <<endl;
    }
    else
    {
        cout <<"Obesidad morbida " <<endl;
    }
}

int main(void)
{
    bmi(1.4, 80);
    return 0;
}