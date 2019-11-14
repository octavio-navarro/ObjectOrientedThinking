#include <cmath>

using namespace std;

// Definición de la clase Vector3D
class Vector3D
{

// Todo lo que se declare debajo de la palabra "public" va a tener un acceso público. Es decir, otros objetos y funciones van a poder ver e interactuar con esos métodos y atributos.
public:
    float x, y, z;
    float xOrigen, yOrigen, zOrigen;

    // El constructor recibe 3 parámetros: los componentes x, y, z, de un vector en 3 dimensiones.
    Vector3D(float x_, float y_, float z_)
    {
        x = x_;
        y = y_;
        z = z_;
        // Las variables xOrigen, yOrigen, zOrigen se inician en 0, pero podrían incluirse en el constructor posteriormente para asignarles un valor en particular.
        xOrigen = 0;
        yOrigen = 0;
        zOrigen = 0;
    }

    float magnitud(void)
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z,2));
    }

    // El método unit calcula un vector unitario a partir de los componentes del vector. Éste usa, además, el método magnitud que se definió anteriormente.
    Vector3D unit()
    {
        float mag = magnitud();
        return Vector3D(x/mag, y/mag, z/mag);
    }
};
