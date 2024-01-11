/*
    Curos de c++ del canal pildoras informaticas.
    Video 17 Operadores I 7/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    int a=5;

    int b=10;

    a += b; // es operador de asignacion equivalente a a = a + b;

    cout<<"El valor de a es: "<<a<<endl;

    a -= b; // es operador de asignacion equivalente a a = a - b;

    cout<<"El valor de a es: "<<a<<endl;

    a *= b; // es operador de asignacion equivalente a a = a * b;

    cout<<"El valor de a es: "<<a<<endl;

    a /= b; // es operador de asignacion equivalente a a = a / b;
    

    
    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



