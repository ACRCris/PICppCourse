/*
    Curos de c++ del canal pildoras informaticas.
    Video 18 Operadores II 20/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    int a=3;
    
    int b=20;

    int c=30;

    double media=(a+b+c)/3; //La division es entera, por lo que el resultado sera 17 un entero.

    cout<<"La media de los 3 valores es: "<<media<<endl;
    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



