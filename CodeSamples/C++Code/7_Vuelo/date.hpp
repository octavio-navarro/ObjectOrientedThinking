#include <iostream>
#include <string>

using namespace std;

class Date
{
    private:
        // Arreglo de strings que guarda el formato con el que se imprimen las fechas
        string dateFormat[3] = {"DD/MM/YY", "DD/MM/YYYY", "YYYY/MM/DD"};

        // Arreglo de ints que guarda el máximo de días que hay en cada mes. Este sirve para poder determinar qué día es el siguiente o el anterior cuando hay un cambio de mes.
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int day, month, year, currentFormat;

    public:

        Date()
        {
            day = 1;
            month = 1;
            year = 1;
        }

        Date(int _day, int _month, int _year)
        {
            // Con estos ifs se valida que no se puedan meter fechas que no son válidas.
            if(_year < 1)
                _year = 1;
            
            if(_month < 1)
                _month = 1;

            if(_month > 12)
                _month = 12;

            if(_day < 1)
                _day = 1;

            if(_day > daysInMonth[_month-1])
                _day = daysInMonth[_month-1];

            day = _day;
            month = _month;
            year = _year;
            currentFormat = 0;
        }

        void printDate()
        {
            // Para imprimir con el formato correcto, se usan strings.
            string dayFormat = "", monthFormat = "";

            // Para poder concatenar un int a una string, se usa el método to_string() que es parte de la librería <string>
            if(day < 10)
                dayFormat = "0"+ to_string(day);
            else
                dayFormat = to_string(day);

            if(month < 10)
                monthFormat = "0"+ to_string(month);
            else
                monthFormat = to_string(month);

            if(currentFormat == 0)
            {
                string yearFormat = to_string(year);
                // El método substr (http://www.cplusplus.com/reference/string/string/substr/) sirve para extraer una cadena de texto en particular. En este caso, se extraen los últimos dos dígitos del año. 
                yearFormat = yearFormat.substr(yearFormat.size()-2, 2);

                cout << dayFormat << "/" << monthFormat << "/" << yearFormat << endl;
            }
            else if(currentFormat == 1)
                cout << dayFormat << "/" << monthFormat << "/" << year << endl;
            else if(currentFormat == 2)
                cout << year << "/" << monthFormat << "/" << dayFormat << endl;

        }

        // Tanto nextDay como previousDay regresan una nueva fecha, no le aplican el cambio de fecha al mismo objeto.
        Date nextDay()
        {
            // Primero se determina cuál es el día, mes, y año siguiente...
            int nextDay, nextMonth, nextYear;
            
            nextDay = day;
            nextMonth = month;
            nextYear = year;

            if(nextDay < daysInMonth[month-1])
                nextDay++;
            else
            {
                nextDay = 1;
                if(nextMonth < 12) 
                    nextMonth++;
                else
                {
                    nextMonth = 1;
                    nextYear++;        
                }
            }
            // ... y se usan para crear un nuevo objeto con la fecha nueva.
            return Date(nextDay, nextMonth, nextYear);
        }

        Date previousDay()
        {
            int previousDay, previousMonth, previousYear;
            
            previousDay = day;
            previousMonth = month;
            previousYear = year;

            if(previousDay > 1)
                previousDay--;
            else
            {
                if(previousMonth > 1)
                {
                    previousMonth--;
                    previousDay = daysInMonth[month-1];
                }
                else
                {
                    previousMonth = 12;
                    previousDay = daysInMonth[month-1];
                    previousYear--;
                }
            }

            return Date(previousDay, previousMonth, previousYear);
        }

        // Esta función me ayuda a cambiar el formato de la fecha de cada objeto.
        void setFormat()
        {
            int opcion = 0;
            cout << "Select a format among the following (0-2): " << endl;
            for(int i = 0; i< 3; i++)
                cout << i << ": " << dateFormat[i] << endl;
            
            cin >> opcion;

            // Si la opción no está entre 0 y 2, pone por defecto la opción 0. 
            if(opcion > 2 && opcion < 0)
                opcion = 0;

            cout << "You chose format: " << dateFormat[opcion] << endl;
            currentFormat = opcion;
        }

};