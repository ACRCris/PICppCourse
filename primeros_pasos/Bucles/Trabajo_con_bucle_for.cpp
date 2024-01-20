#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 26 Bucle For 02/06/23
*/


int main(){

    int edades[3][5] = {{25,35,80.50,27}, //Declaracion e inicializacion de un array bidimensional de 3 filas y 5 columnas de tipo entero
                        {17,19,81,52,83},
                        {7,9,18,23,19}};
   
    for (int i = 0; i < 5; i++) //La sintaxis del bucle for es la siguiente: for (inicializacion; condicion; incremento) {codigo a ejecutar}
    {
       for (int j = 0; j < 3; j++) //El bucle for se puede anidar, es decir, se puede poner un bucle for dentro de otro bucle for
       {
           cout<<"La edad de la fila "<<j<<" y la columna "<<i<<" es: "<<edades[j][i]<<endl;
       } //Por cada iteracion del bucle for inicial este bucle for se ejecutara 3 veces
    }

    return 0;
}