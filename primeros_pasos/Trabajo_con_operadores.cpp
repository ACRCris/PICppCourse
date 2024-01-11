/*
    Curos de c++ del canal pildoras informaticas.
    Video 17 Operadores I 7/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){ 

    
    int num;

    bool es_primo=true;

    cout<<"Introduce un numero: ";

    cin>>num;

    for (int i = 2; i <=sqrt(num); i++){   

         /*Es suficiente revisar los numeros menores o iguales a la raiz cuadrada del numero a evaluar
        Pues si un numero es p no es primo entonces existen a,b tales que p = a*b, por lo que a y b no pueden ser mayores que la raiz cuadrada de p
        Si a y b fueran mayores que la raiz cuadrada de p, entonces a*b seria mayor que p, lo cual es una contradiccion, es decir 
        al menos uno de los dos numero debe ser menor o igual que la raiz cuadrada de p, por lo que si no se encuentra un divisor de p menor o igual
        que la raiz cuadrada de p, entonces p es primo.*/

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



