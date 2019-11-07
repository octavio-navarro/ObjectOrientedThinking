#include <iostream>

using namespace std;

void bisiesto(int anio)
{
    // Hay que tener cuidado con el uso de paréntesis para cuando se hacen comparaciones.
    // En C++: and sería &&; or sería ||; not sería !
    if((anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)))
    {
        cout << "Anio bisiesto" << endl;
    }
    else
    {
        cout << "Anio normal" << endl;
    }
    
}

int main(void)
{
    int anio = 0;
    cout << "Dame un anio: " ;
    cin >> anio;
    bisiesto(anio);
}