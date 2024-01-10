/*
    Curos de c++ del canal pildoras informaticas.
    Video 12 Declaracion e inicializacion de arrays 30/11/22
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    int edades[10] = {15,20,25};//Declaracion e inicializacion de array de tipo entero especificando el tamaño del array pero sin llenar todas la posciones
                                //la indexacion de los elementos del array empieza en 0. 
                                //las posciones 0,1,2 tienen las respectivas edades 15,20,25 y las posiciones 3,4,5,6,7,8,9 tienen el valor 0
                                //Es distinto el tamanio del array y el ultimo indice del array, pues la indexacion empieza en 0
                                
    cout<<edades[2]<<endl; //imprime en consola el valor 20

    return 0;   

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



