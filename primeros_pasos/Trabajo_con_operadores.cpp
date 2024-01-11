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

    float b=4.0f;

    double c=8.0;

    auto resultado = a+b; //auto es una palabra reservada que permite que el compilador infiera el tipo de dato de la variable resultado, en este caso es un float

    cout<<typeid(resultado).name()<<endl; //typeid es una funcion que permite obtener el tipo de dato de una variable
    
    auto resultado2 = a+c;

    cout<<typeid(resultado2).name()<<endl;

    auto resultado3 = a+a;

    cout<<typeid(resultado3).name()<<endl;
    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



