/*
    Curos de c++ del canal pildoras informaticas.
    Video 8 Ejemplo sencillo 15/10/22
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
    
    const string nombre = "Juan"; //declaracion e inicializacion de una constante
    
    int edad {18}; //declaracion e inicializacion de tipo lista, de variable de tipo entero

    double salario; //declaracion de variable de tipo double

    cout<<"Introduce el salario de el empleado: "; //cout es una funcion de la libreria iostream que permite mostrar en consola
    
    cin>>salario; //cin es una funcion de la libreria iostream que permite leer de consola y almacenar en una variable de cualquier tipo, en este caso double

    cout<<"Introduce la edad del empleado: ";

    cin>>edad;

    //nombre = "Ana"; genera error  debido a que nombre es una constante y no puede variar su valor durante la ejecucion del programa

    cout<<"--------------------------"<<endl;

    cout<<"Datos del empleado: "<<endl;    

    cout<<"Nombre: "<<nombre<<". Edad: "<<edad<<". Salario: "<<salario<<endl; //<< es el operador de insercion, permite concatenar valores de cualquier tipo  

    //todas la funciones deben retornar un valor,exeptuando las void, en este caso la funcion main retorna un entero (int).
}