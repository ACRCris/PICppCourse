/*
    Curos de c++ del canal pildoras informaticas.
    Video 15 Vectores II 22/12/23
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
#include <vector> //Directiva de preprocesador include para incluir vector libreria estandar de c++ que permite operaciones con vectores

using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    /*
    Ejercicio

    Crear un vector incialmente vacio y perdir por consola cuantos valores se desa almacenar en el vector.
    Luego pedir por consola los valores y almacenarlos en el vector.
    Mostrar en consola los valores almacenados en el vector.
    
    */ 

    vector <int> records;   //Declaracion de un vector de tipo int, si generea es por que se necesita incluir la libreria vector.
                            //Se declaran con la palabra reservada vector seguido de <tipo de dato> y el nombre del vector.
                            //Los vectores son dinamicos, es decir que se pueden modificar su tamaño en tiempo de ejecucion.
                            //Cuando al vector se le asigna un tamaño, se le asigna un espacio en memoria contiguo, todos con valores 0.

   
    int size {0}; 

    cout<<"¿Cuantos valores desea almacenar en el vector?: ";

    cin>>size;

    cout<<"Ingrese los valores a almacenar en el vector: "<<endl;

    int aux {0};
    while(aux < size){// Bucle indeterminado, se ejecuta mientras la condicion sea verdadera.1

        cout<<"Ingrese el valor almacenado en la posicion "<<aux<<": ";
        int value;
        cin>>value;
        records.push_back(value); //metodo push_back de la clase vector, permite agregar un elemento al final del vector.
        aux++;
    }
    cout<<"\n======================================================================================" <<endl;
    cout<<"\nLos valores almacenados en el vector son: "<<endl;

    //foerach loop
    for(int value: records){ //for each loop, permite iterar sobre cada elemento de un vector, en este caso se itera sobre cada elemento del vector my_vector y se almacena en la variable value.
        cout<<value<<" ";
    }

    cout<<endl;
    
    



    
    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



