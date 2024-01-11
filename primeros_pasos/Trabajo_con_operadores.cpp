/*
    Curos de c++ del canal pildoras informaticas.
    Video 18 Operadores II 20/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    int a=10;
    
    double b=12;

    int c=30;

    double media=(a+b+c)/3; //Ejemplo de la division no entera, de la suma de almenos un double y un int, el resultado es un double, pues es el tipo de dato mas espacioso y preciso.

    cout<<"La media de los 3 valores es: "<<media<<endl;

    cout<<"El tipo de dato de media es: "<<typeid(media).name()<<endl;
    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



