/*
    Curos de c++ del canal pildoras informaticas.
    Video 20 Operadores y condicional IF II 10/04/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo


int main(){ 

    /*
    Se da beca si su calificacion es superior a 8 o
    si su distancia del domicilio al centro es superior a 20km ademas los ingresos familiares deben ser inferiores a 20.000€
    */

    int calificacion, distancia_centro, ingresos_familiares;


    cout<<"Por favor introduce la calificacion: ";

    cin>>calificacion;

    cout<<"Por favor introduce la distancia al centro: ";

    cin>>distancia_centro;

    cout<<"Por favor introduce los ingresos familiares: ";

    cin>>ingresos_familiares;


    if(calificacion > 8 || (distancia_centro > 20 && ingresos_familiares < 20000)){   //if es un condicional que permite ejecutar un bloque de codigo si se cumple la condicion, alterando el flujo de ejecucion del programa
                                                                                    //|| es el operador logico OR, se evalua la condicion que evalua si almenos una de las condiciones es verdadera                              

        cout<<"Puedes obtener el carnet"<<endl;
 
    }else{  //else (en otro caso) se ejecuta si no se cumple la condicion del if
            //sirve para evaluar la condicion contraria a la del if, es decir si no es necesario evaluar la condicion contraria se puede omitir el else

        cout<<"No cumples los requisitos"<<endl;

    }//Equivalente al codigo anterior.

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



