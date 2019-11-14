#include <iostream>

// Es importante incluir el archivo en el que se definió la clase.
#include "Vector3D.hpp"

using namespace std;

int main(void)
{
    // Se crean dos objetos: instancias de la clase Vector3D, cada uno con atributos independientes. En este momento, la clase Vector3D se puede usar como un nuevo tipo de dato.
    Vector3D vector1(5, 6, 2);
    Vector3D vector2(1, 2, 3);

    // Al usar un punto después de el nombre del objeto, se puede acceder a los miembros públicos de ese objeto. En ese caso, estamos imprimiendo sus atributos x, y, z, y posteriormente estamos llamando a su magnitud y al cálculo del vector unitario.
    cout << vector1.x << "," << vector1.y << "," << vector1.z << endl;
    cout << vector2.x << "," << vector2.y << "," << vector2.z << endl;

    cout << "La magnitud del vec1 es: " << vector1.magnitud() << endl;

    Vector3D unitarioVector1 = vector1.unit();

    cout << unitarioVector1.x << "," << unitarioVector1.y <<
     "," << unitarioVector1.z << endl;

    cout << "La magnitud del vec2 es: " << vector2.magnitud() << endl;

    Vector3D unitarioVector2 = vector2.unit();

    cout << unitarioVector2.x << "," << unitarioVector2.y <<
     "," << unitarioVector2.z << endl;

    return 0;
}
