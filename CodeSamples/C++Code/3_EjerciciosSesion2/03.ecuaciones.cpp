// La definición completa de cmath la encuentran en: http://www.cplusplus.com/reference/cmath/
#include <cmath>
#include <iostream>

using namespace std;

float ecuacion_1(float x)
{
    float x_rad = 0;
    x_rad = M_PI * x / 180;
    return pow(sin(1/x_rad), 2) / x;
}

float ecuacion_2(float x)
{
    float x_rad = 0;
    x_rad = M_PI * x / 180;
    // Dentro de cmath tenemos todas las funciones trigonométricas, como sin o tan
    return (pow(sin(x_rad), (1/3)) / (4*x) + (5 * M_PI * x) * (tan(x_rad*x_rad)));
}

int main(void)
{
    float numero = 0;
    cout << "Dame un numero: " << endl;
    cin >> numero;
    cout << "El resultado de ecuacion 1 es: " << ecuacion_1(numero) << endl;
    cout << "El resultado de ecuacion 2 es: " << ecuacion_2(numero) << endl;
}