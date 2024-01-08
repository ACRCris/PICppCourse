/*
    Curos de c++ del canal pildoras informaticas.
    Video 5 Diseccion primer programa 22/09/22
*/

//A las lineas de codigo que lee el compilador se les llama declaraciones o sentencias

#include <iostream> //Directiva de preprocesador include que permite incluir librerias
                    //iostream es una libreria estandar de c++ que permite operaciones de entrada y salida

//using namespace std;//las palabras reservada using namespace permite usar espacion de nombres.
                    //los espacios de nombres son usado para organizar el codigo en bloques logicos y evitar conflictos de nombres
                    //std es un espacio de nombres que contiene las funcionalidades de la libreria iostream
                    //Es declaracion permite usar las funcionalidades de la libreria iostream sin tener que anteponer std::
                    

int main(){

    cout<<"Hola alumnos que tal"<<endl; //Al comentar using namespace std; se genera un error pues se debe anteponer std::cout, pues ya no esta usando el espacio de nombres std en el codigo
                                        //cout es un funcionalidad de la libreria iostream que permite imprimir en pantalla

    return 0;

}