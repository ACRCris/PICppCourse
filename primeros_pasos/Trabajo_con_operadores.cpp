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
    
    int b=12;

    int c=30;

    double media=(a+b+c)/3; //Ejemplo de la division no entera, de la suma de 3 numeros enteros, el resultado es un numero entero, por lo que se pierde la parte decimal.
                            //Esto debido a la conversion implicita de tipos de datos, pues c++ convierte al tipo mas preciso o amplio pero como todos son tipo int el resultado es int.
                            
    cout<<"La media de los 3 valores es: "<<media<<endl;
    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



