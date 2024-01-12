/*
    Curos de c++ del canal pildoras informaticas.
    Video 19 Operadores y condicional IF I 28/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    int edad;

    cout<<"Por favor introduce tu edad: ";

    cin>>edad;

    if(edad<18){ //if es un condicional que permite ejecutar un bloque de codigo si se cumple la condicion, alterando el flujo de ejecucion del programa

        cout<<"No tienes la edad suficiente para sacarte el carnet"<<endl;
 
    }else{  //else (en otro caso) se ejecuta si no se cumple la condicion del if
            //sirve para evaluar la condicion contraria a la del if, es decir si no es necesario evaluar la condicion contraria se puede omitir el else

        cout<<"tienes la edad suficiente para sacarte el carnet"<<endl;

    }//Equivalente al codigo anterior.

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



