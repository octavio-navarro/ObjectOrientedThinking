#include <string>
#include "date.hpp"

using namespace std;

class Vuelo
{
    private:
        // string id, origen, destino, tipoVuelo;
        // Date horaSalida, horaLlegada;
        // int numeroPasajeros;
    
    public:
        string id, origen, destino, tipoVuelo;
        Date horaSalida, horaLlegada;
        int numeroPasajeros;

        Vuelo()
        {
            id = "";
            origen = "";
            destino = "";
            tipoVuelo = "";
            horaSalida = Date();
            horaLlegada = Date();
        }

        Vuelo(string _id, string _origen, string _destino, string _tipoVuelo, Date _horaSalida, Date _horaLlegada)
        {
            id = _id;
            origen = _origen;
            destino = _destino;
            tipoVuelo = _tipoVuelo;
            horaSalida = _horaSalida;
            horaLlegada = _horaLlegada;
            numeroPasajeros = 0;
        }

        Date getHorarioSalida() { return horaSalida; }
        Date getHorarioLlegada() { return horaLlegada; }

        void setHorarioSalida(Date nuevoHorario)
        {
            horaSalida = nuevoHorario;
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