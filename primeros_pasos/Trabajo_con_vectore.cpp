/*
    Curos de c++ del canal pildoras informaticas.
    Video 15 Vectores I 07/12/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    vector <int> records;   //Declaracion de un vector de tipo int, si generea es por que se necesita incluir la libreria vector.
                            //Se declaran con la palabra reservada vector seguido de <tipo de dato> y el nombre del vector.
                            //Los vectores son dinamicos, es decir que se pueden modificar su tamaño en tiempo de ejecucion.
                            //Cuando no se especifica el tamaño del vector esto son vacios, es decir que no tienen elementos.
                            
    vector <char> letras;   //Declaracion de un vector de tipo char.

    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



