#include <iostream>
#include <cmath>

using namespace std;

float area_esfera(float radio)
{
    // M_PI está definido en cmath. Esa variable tiene el valor de Pi.
    return 4 * M_PI * radio * radio;
}

float volumen_esfera(float radio)
{
    return (4/3) * M_PI * pow(radio, 3);
}

int main(void)
{
    float radio = 0, area = 0, volumen = 0;

    cout << "Calculo de area y volumen" << endl;

    cout << "Dame el radio: ";
    cin >> radio;

    area = area_esfera(radio);
    volumen = volumen_esfera(radio);

    cout << "Area: " << area << " Volumen: " << volumen << endl;
}
