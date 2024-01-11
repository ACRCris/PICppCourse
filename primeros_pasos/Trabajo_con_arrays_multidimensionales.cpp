/*
    Curos de c++ del canal pildoras informaticas.
    Video 14 Arrays multidimensionales 17/01/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    //Se quiere crear un array multidimensional para guardar el numero de carros que pasaron en la horas el dias y meses.

    int pasoCoches[24][31][12]; //array multidimensional de 3 dimensiones, 24 horas, 31 dias, 12 meses.

    //15 de mayo a ls 2:00 
    pasoCoches[2][14][4] = 4;

    cout<<"El numero de carros que pasaron el 15 de mayo a las 2:00 es: "<<pasoCoches[2][14][4]<<endl;

    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



