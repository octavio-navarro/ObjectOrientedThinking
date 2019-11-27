#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vuelo.hpp"

using namespace std;

string codigosAeropuertos[] = {"MEX", "JFK", "LAX", "MEX2", "JFK2", "LAX2"};

int main(void)
{
    srand(time(0));
    Date horaSalida(25, 11, 2019);
    Date horaLlegada(26, 11, 2019);

    Vuelo vuelos[10];

    for(int idx = 0; idx < 10; idx++)
    {
        int randomOrigin = rand() % 6;
        int randomDestination = rand() % 6;
        
        while(randomOrigin == randomDestination)
            randomDestination = rand() % 6;

        Vuelo vuelo("AM" + to_string(idx+1), codigosAeropuertos[randomOrigin], codigosAeropuertos[randomDestination], "Internacional", horaSalida, horaLlegada);
        vuelos[idx] = vuelo;
    }

    for(int idx = 0; idx < 10; idx++)
    {
        vuelos[idx].imprimirVuelo();
        cout << endl;
    }

    return 0;
}