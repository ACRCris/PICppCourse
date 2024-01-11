/*
    Curos de c++ del canal pildoras informaticas.
    Video 14 Arrays multidimensionales 17/01/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    //Se quiere crear un array multidimensional para guardar el numero de carros que pasaron en la horas el dias y meses.

    int pasoCoches[24][31][12]; //array multidimensional de 3 dimensiones, 24 horas, 31 dias, 12 meses.

    for (int hora = 0; hora < 24; hora++){//se inicializa la variable hora en 0, se evalua la condicion hora < 24, si es verdadera se ejecuta el bloque de codigo y se incrementa hora en 1.

        for (int dia = 0; dia < 31; dia++){//se inicializa la variable dia en 0, se evalua la condicion dia < 31, si es verdadera se ejecuta el bloque de codigo y se incrementa dia en 1.

            for (int mes = 0; mes < 12; mes++){//se inicializa la variable mes en 0, se evalua la condicion mes < 12, si es verdadera se ejecuta el bloque de codigo y se incrementa mes en 1.

                pasoCoches[hora][dia][mes] = rand()%1000; //se asigna un valor entero aleatorio entre 0 y 999 a cada posicion del array multidimensional.

            }
        }
    }//Al largo de este bucle anidado se realiza 24*31*12 = 8928 iteraciones.

    cout<<"El numero de carros que pasaron el 7 de noviembre a las 19:00 es: "<<pasoCoches[19][6][10]<<endl;

    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



