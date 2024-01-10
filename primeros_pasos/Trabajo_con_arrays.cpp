/*
    Curos de c++ del canal pildoras informaticas.
    Video 12 Declaracion e inicializacion de arrays 30/11/22
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    int matrix[] = {15,20,25};  //Declaracion e inicializacion de array de tipo entero sin especificar el tamaño del array
                                //la indexacion de los elementos del array empieza en 0. 

    cout<<matrix[1]<<endl;      //Muestra en consola el segundo elemento del array
    
    cout<<matrix[2]<<endl;      //Muestra en consola el tercer elemento del array


    return 0;

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



