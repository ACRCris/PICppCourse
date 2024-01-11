/*
    Curos de c++ del canal pildoras informaticas.
    Video 14 Arrays bidimensionales 16/12/22
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    //Declaracion e inicializacion de array bidimensional.
    //El primer numero entre [] indica el numero de filas y el segundo numero entre [] indica el numero de columnas. Este array tiene 4 filas 5 columnas.
    //Los numero a la derecha van llenando en orden de izq-dehc arriba-abajo.
    int mi_matriz [4][5];//Se usara bucles anidados para rellenar las posiciones del array.


    for(int fila = 0; fila < 4; fila++){//se inicializa la variable fila en 0, se evalua la condicion fila < 4, si es verdadera se ejecuta el bloque de codigo y se incrementa fila en 1.

        for(int columna = 0; columna < 5; columna++){//se inicializa la variable columna en 0, se evalua la condicion columna < 5, si es verdadera se ejecuta el bloque de codigo y se incrementa columna en 1.

            cin>>mi_matriz[fila][columna];

        }//por cada entrada en el primer bucle for, este bucle for se ejecuta 5 veces
    }

    cout<< "Visualizamos ahora los valores almacenados en el array"<<endl;

    for(int fila = 0; fila < 4; fila++){//se inicializa la variable fila en 0, se evalua la condicion fila < 4, si es verdadera se ejecuta el bloque de codigo y se incrementa fila en 1.

        for(int columna = 0; columna < 5; columna++){//se inicializa la variable columna en 0, se evalua la condicion columna < 5, si es verdadera se ejecuta el bloque de codigo y se incrementa columna en 1.

            cout<<mi_matriz[fila][columna]<<" "; 

        }

        cout<<endl;//cada cinco iteraciones del bucle for se imprime un salto de linea, para que se visualice como una matriz.
    }


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



