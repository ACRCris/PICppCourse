/*
    Curos de c++ del canal pildoras informaticas.
    Video 5 Diseccion primer programa 22/09/22
*/

//A las lineas de codigo que lee el compilador se les llama declaraciones o sentencias

#include <iostream> //Directiva de preprocesador include que permite incluir librerias
                    //iostream es una libreria estandar de c++ que permite operaciones de entrada y salida

using namespace std;//las palabras reservada using namespace permite usar espacion de nombres.
                    //los espacios de nombres son usado para organizar el codigo en bloques logicos y evitar conflictos de nombres
                    //std es un espacio de nombres que contiene las funcionalidades de la libreria iostream
                    //Es declaracion permite usar las funcionalidades de la libreria iostream sin tener que anteponer std::
                    

int main(){ //funcion principal del cualquier programa en c++.
            //Esta funcion como cualquier otra, empieza con una llave de apertura ( { ) y termina con una llave de cierre ( } )
            //Funciones anidan bloques de codigo, que se ejecutan en orden secuencial de arriba abajo. Y tienen una entrada de parametros ()

    cout<<"Hola alumnos que tal"<<endl; //cout (character out) es un funcionalidad de la libreria iostream que permite imprimir en pantalla
                                        //<< es un operador de insercion que permite insertar datos en el flujo de salida, es esta caso un string 
                                        //endl agrega un salto de linea al flujo de salida
    return 0;

}