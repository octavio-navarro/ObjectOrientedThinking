#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vuelo.hpp"

using namespace std;

string codigosAeropuertos[] = {"MEX", "JFK", "LAX", "MEX2", "JFK2", "LAX2"};
int numeroVuelosMes[12] = {0};

int main(void)
{
    srand(time(0));
    Date horaSalida(25, 11, 2019);
    Date horaLlegada(26, 11, 2019);

    Vuelo vuelos[100];

    for(int idx = 0; idx < 100; idx++)
    {
        int randomOrigin = rand() % 6;
        int randomDestination = rand() % 6;
        
        while(randomOrigin == randomDestination)
            randomDestination = rand() % 6;

        Vuelo vuelo("AM" + to_string(idx+1), codigosAeropuertos[randomOrigin], codigosAeropuertos[randomDestination], "Internacional", horaSalida, horaLlegada);
        vuelos[idx] = vuelo;
    }

    for(int idx = 0; idx < 100; idx++)
    {
        numeroVuelosMes[vuelos[idx].mes]++;
    }

    for(int idx = 0; idx < 12; idx++)
    {
        cout << idx << " : "<< numeroVuelosMes[idx] << endl;
    }

    // for(int idx = 0; idx < 100; idx++)
    // {
    //     vuelos[idx].imprimirVuelo();
    //     cout << endl;
    // }

    return 0;
}