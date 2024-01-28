#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 27 Bucle For 15/06/23
*/


int main(){
    
    int edades[] = {25,35,80.50,27}; //Declaracion e inicializacion de un array de tipo entero.

    for(int edad:edades){   //La sintaxis del bucle for each es la siguiente: for (tipo_de_dato variable:array) {codigo a ejecutar}
                            //perdemos la informacion de la posicion del array, solo podemos acceder al valor de cada elemento del array.
        cout<<edad<<endl;   
    }
                        
   
    
    return 0;
}