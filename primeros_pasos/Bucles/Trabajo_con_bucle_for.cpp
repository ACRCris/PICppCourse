#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 26 Bucle For 02/06/23
*/


int main(){

    int edades[] = {25,35,80.50,27}; //Declaracion e inicializacion de un array de enteros

    for (int i = 0; i < 5; i++) //La sintaxis del bucle for es la siguiente: for (inicializacion; condicion; incremento) {codigo a ejecutar}
    {
        cout<<"Edad "<<i<<" es: "<<edades[i]<<endl;
    }

    return 0;
}