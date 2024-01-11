/*
    Curos de c++ del canal pildoras informaticas.
    Video 15 Vectores II 22/12/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    vector <int> records{25,45,60,35};  //Declaracion e inicializacion de tipo lista de un vector de tipo int, si generea es por que se necesita incluir la libreria vector.
                                        //Se declaran con la palabra reservada vector seguido de <tipo de dato> y el nombre del vector.
                                        //Los vectores son dinamicos, es decir que se pueden modificar su tamaño en tiempo de ejecucion.
                                        //Cuando al vector se le asigna un tamaño, se le asigna un espacio en memoria contiguo, todos con valores 0.

    vector <char> letras {'z','w','r'};   //Declaracion e inicializacion de tipo lista de un vector de tipo char y en este caso almacena por defecto un caracter indeterminado en las 10 posiciones del vector.

    vector <double> salario_base (350, 2125.50); //Declaracion e inicializacion del vector, asignado primero el tamaño y luego el valor por defecto de cada posicion del vector.

    int i = 0;

    cout<<records.at(3); //Es casi equivalente a records[3], pero at() permite comprobar que el indice no se salga del rango del vector, si se sale del rango genera un error.





    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



