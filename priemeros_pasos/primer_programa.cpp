/*
    Curos de c++ del canal pildoras informaticas.
    Video 6 Tipos y variables 03/10/22
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
    
    int salario = 3500; //declaracion de variable, es decir se reserva espacion en la RAM del ordenador, y inicializacion en  una misma linea

    cout<<salario;//muestra en consola el valor de la variable salario

    salario = 3850; //asignacion de un nuevo valor. Esto es posible debido a que salario es una variable y puede variar su valor durante la ejecucion del programa

    cout<<salario;

    return 0;
    //todas la funciones deben retornar un valor,exeptuando las void, en este caso la funcion main retorna un entero (int).
}