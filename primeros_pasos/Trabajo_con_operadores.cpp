/*
    Curos de c++ del canal pildoras informaticas.
    Video 17 Operadores I 7/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    
    int num;

    bool es_primo=true;

    cout<<"Introduce un numero: ";

    cin>>num;

    for (int i = 2; i < num/2; i++) {

        if(num%i==0){//Operador modulo %, devuelve el resto de la division entera de dos numeros

            es_primo=false;
            break;// Operador break, permite salir de un bucle 

        }
    }

    if(es_primo){

        cout<<"El numero "<<num<<" es primo"<<endl;

    }else{


        cout<<"El numero "<<num<<" no es primo"<<endl;

    }
    
    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



