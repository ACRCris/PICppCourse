/*
    Curos de c++ del canal pildoras informaticas.
    Video 16 Vectores II 22/12/23
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

    //vector <int> records;  //Declaracion de un vector de tipo int, si generea es por que se necesita incluir la libreria vector.
                            //Se declaran con la palabra reservada vector seguido de <tipo de dato> y el nombre del vector.
                            //Los vectores son dinamicos, es decir que se pueden modificar su tamaño en tiempo de ejecucion.
                            //Cuando al vector se le asigna un tamaño, se le asigna un espacio en memoria contiguo, todos con valores 0.

   

    cout<<"¿Cuántos valores quieres que tenga el vector?: ";

    int elementos=0;

    cin>>elementos;

    vector <int> records(elementos); 

    for(int i=0; i<elementos; i++){// //se inicializa la variable i en 0, se evalua la condicion i < records.size(), si es verdadera se ejecuta el bloque de codigo y se incrementa i en 1.
                                                // inicializacion                             condicion                                 incremento
        cout<<"Introduce el elemento del vector: "<<i<<": ";
        cin>>records[i];

    }

    cout<<"A continuacion te muestro los elementos almacenados en el vector: "<<endl;

    for(int i=0; i<elementos; i++){

        cout<<records[i]<<endl;

    }
    
    
    



    
    return 0;


    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
        C++ a diferencia de JAVA no maneja la excepcion ArrayIndexOutOfBoundsException, por lo que si se intenta acceder a una posicion de un array que sea declarado se obtendra los que se conoce como udnefined behavior.

    */ 

}



