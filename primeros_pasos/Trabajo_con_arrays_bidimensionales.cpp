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
    int mi_matriz [4][5] = {15,25,8,-7,92,77,12,11,44,56,59,43,78,12,43,95,12,87,33};

    mi_matriz[0][2] = 125; //asignacion de un nuevo valor a un elemento del array

    cout<< mi_matriz[0][2]<<endl;  //imprime en consola el valor 8, que esta en la fila 0 y columna 2.
    
    return 0;   

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



