#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 22 Switch-Case 24/04/23
*/


int main(){
    
    int opcion;

    cout<<"Menu de opciones"<<endl;

    cout<<"1. Mostrar mensaje"<<endl;
    cout<<"2. Calcular una suma"<<endl;
    cout<<"3. Salir del programa"<<endl;
    cout<<"Introduce la opcion deseada: (1, 2 o 3): "<<endl;

    cin>>opcion;

    switch(opcion){
        case 1: 

                cout<<"Hola alumnos de C++"<<endl;

                break;

        case 2: 

                int a, b, suma;

                cout<<"Introduce dos numeros: "<<endl;

                cin>>a>>b; //Introduccion por consola de dos numeros enteros a y b, con el operador >> se puede introducir varios valores en una misma linea

                cout<<"La suma de "<<a<<" y "<<b<<" es "<<a+b<<endl;    

                break;
        
        case 3: 

                cout<<"Saliendo del programa..."<<endl;

        default: 
                cout<<"Opcion no valida"<<endl;
    }

}