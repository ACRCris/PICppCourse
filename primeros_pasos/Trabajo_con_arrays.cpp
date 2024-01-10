/*
    Curos de c++ del canal pildoras informaticas.
    Video 12 Declaracion e inicializacion de arrays 30/11/22
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){


    int edades[personas] = {15,20,25}; //Declaracion e inicializacion con tamaño de array definido por una constante yo no causa error.

    cout<<edades[7]<<endl; //imprime en consola el valor 0

    const int personas =10; //Causa error dado que la constante se esta usando anetes de declararse e inicializarse, pues el flujo de ejecucion es de arriba abajo


    return 0;   

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



