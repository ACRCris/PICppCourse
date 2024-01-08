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

    cout<<"Hola alumnos que tal"; //Se elimina el salto de linea, por lo que el texto se imprime en la misma linea
    cout<<"me voy a programar en c++"<<endl;  
    
    //return 0; Creo que puede generar un error de compilacion en algunos compiladores
    //todas la funciones deben retornar un valor,exeptuando las void, en este caso la funcion main retorna un entero (int)
}