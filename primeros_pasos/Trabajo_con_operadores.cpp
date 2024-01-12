/*
    Curos de c++ del canal pildoras informaticas.
    Video 19 Operadores y condicional IF I 28/03/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores
#include <math.h> //Directiva de preprocesador include para incluir math.h libreria estandar de c++ que permite operaciones matematicas
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

void toLowerCase(string &cadena){   //Funcion que convierte un string a minusculas
                                    //& se usa antes de una variable para pasarla por referencia, lo que permite modificarla dentro de la funcion sin necesidad de retornarla

    for(int i=0; i<cadena.length(); i++){ //length() es un metodo de la clase string que devuelve la longitud de la cadena

        cadena[i] = tolower(cadena[i]); //tolower() es una funcion de la libreria cctype que convierte un caracter a minuscula

    }

}

int main(){ 

    int edad;

    string ex_medico;

    cout<<"Por favor introduce tu edad: ";

    cin>>edad;

    cout<<"Has pasado el examen medico? (si/no): ";

    cin>>ex_medico;

    toLowerCase(ex_medico); //Se llama a la funcion toLowerCase() para convertir el string a minusculas

    if(edad>=18 && ex_medico == "si"){  //if es un condicional que permite ejecutar un bloque de codigo si se cumple la condicion, alterando el flujo de ejecucion del programa
                                        //&& es un operador logico que evalua si se cumplen dos condiciones a la vez
                                        //El programa no funciona bien pues si el usario ingresa "si" escrito de una forma diferente a la que se espera el programa no lo reconoce, para solucionar esto se puede usar la funcion toLowerCase() de la clase string para convertir el string a minusculas y luego compararlo con "si"

        cout<<"Puedes obtener el carnet"<<endl;
 
    }else{  //else (en otro caso) se ejecuta si no se cumple la condicion del if
            //sirve para evaluar la condicion contraria a la del if, es decir si no es necesario evaluar la condicion contraria se puede omitir el else

        cout<<"No cumples los requisitos"<<endl;

    }//Equivalente al codigo anterior

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



