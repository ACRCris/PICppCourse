/*
    Curos de c++ del canal pildoras informaticas.
    Video 15 Vectores I 07/12/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    vector <int> records{25,45,60,35};  //Declaracion e inicializacion de tipo lista de un vector de tipo int, si generea es por que se necesita incluir la libreria vector.
                                        //Se declaran con la palabra reservada vector seguido de <tipo de dato> y el nombre del vector.
                                        //Los vectores son dinamicos, es decir que se pueden modificar su tamaño en tiempo de ejecucion.
                                        //Cuando al vector se le asigna un tamaño, se le asigna un espacio en memoria contiguo, todos con valores 0.

    vector <char> letras(10);   //Declaracion de un vector de tipo char y en este caso almacena por defecto un caracter indeterminado en las 10 posiciones del vector.

    for (int i = 0; i <4; i++){//se inicializa la variable i en 0, se evalua la condicion i < 5, si es verdadera se ejecuta el bloque de codigo y se incrementa i en 1.

        cout<<records[i]<<endl; //imprime en consola los valores almacenados en el vector records en la posicion i.
    }

    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



