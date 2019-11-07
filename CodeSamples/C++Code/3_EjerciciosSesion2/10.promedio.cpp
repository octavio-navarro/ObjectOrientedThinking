#include <iostream>

// En ésta librería se encuentran las funciones para hacer randoms.
#include <cstdlib>

using namespace std;

// Para poder pasar un arreglo a una función, se hace de la siguiente manera. Por ahora, tenemos que mandarle el tamaño también, por que no tenemos una manera (por ahora) de calcular el tamaño de un arreglo. 
float promedio(int numeros[], int tamanio)
{
    float promedio = 0;

    for(int idx = 0; idx < tamanio; idx++)
    {
        // Para acceder a un número de un arreglo, es similar a una lista en python. Se hace a través de corchetes y un índice. 
        promedio += numeros[idx];
    }

    promedio /= tamanio;

    return promedio;
}

int main(void)
{
    int terminos = 0;
    cout << "Cuantos numeros quieres?: ";
    cin >> terminos;

    // En este caso, la variable numeros se inicia después para poder saber cuántos términos va a tener el arreglo. Si se iguala a algo entre llaves, en este caso {0}, a todos los elementos del arreglo se les asigna 0.
    int numeros[terminos] = {0};

    // Se usa un for para asignar los 10 números alteatorios al arreglo.
    for(int idx = 0; idx < terminos; idx++)
    {
        // Rand regresa números entre 0 y RAND_MAX (32767). Para decirle que quieres un número en un rango en particular, se suma el valor inicial, y se hace módulo con el valor final del rango.
        numeros[idx] = 1 + rand() % 10;
        cout << numeros[idx] << " ";
    }
    cout << endl;

    cout << "El promedio es: " << promedio(numeros, terminos)<< endl;
}