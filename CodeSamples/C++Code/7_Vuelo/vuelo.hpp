#include <string>
#include <cstdlib>

#include "date.hpp"

using namespace std;

class Vuelo
{
    private:
        // string id, origen, destino, tipoVuelo;
        // Date horaSalida, horaLlegada;
        // int numeroPasajeros;
    
    public:
        string id, origen, tipoVuelo;
        int destino;
        Date horaSalida, horaLlegada;
        int numeroPasajeros;
        int mes;

        Vuelo()
        {
            id = "";
            origen = "";
            destino = rand() % 25;
            tipoVuelo = "";
            horaSalida = Date();
            horaLlegada = Date();
            mes = rand() % 12;
        }

        Vuelo(string _id, string _origen, string _destino, string _tipoVuelo, Date _horaSalida, Date _horaLlegada)
        {
            id = _id;
            origen = _origen;
            destino = rand()%25;
            tipoVuelo = _tipoVuelo;
            horaSalida = _horaSalida;
            horaLlegada = _horaLlegada;
            numeroPasajeros = 0;
            
            mes = rand() % 12;
        }

        Date getHorarioSalida() { return horaSalida; }
        Date getHorarioLlegada() { return horaLlegada; }

        void setHorarioSalida(Date nuevoHorario)
        {
            horaSalida = nuevoHorario;
        }

        void setDestino(int nuevoDestino)
        {
            if(nuevoDestino < 25)
                destino = nuevoDestino;
            else
                destino = 0;
        }

        void setHorarioLlegada(Date nuevoHorario)
        {
            horaLlegada = nuevoHorario;
        }

        void imprimirVuelo()
        {
            cout << "ID: " << id << "\nOrigen: " << origen << "\nDestino: " << destino << "\nTipo: " << tipoVuelo << endl;

            cout << "Horario salida" << endl;   
            horaSalida.printDate();

            cout << "Horario llegada" << endl;   
            horaLlegada.printDate();
        }
};