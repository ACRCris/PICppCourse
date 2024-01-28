#include <iostream>
#include <vector>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 28 Bucle While 26/06/23.
*/


int main(){
    
    int i {1};

    while (i <= 10) //El bucle while es bucle indeterminado, es decir, no se sabe cuantas veces se va a ejecutar el bucle
    {
        if(i % 2 == 0){ //Si el resto de la division de i entre 2 es 0, es decir, si i es par
            
            cout<<"El numero "<<i<<" es par"<<endl;
        }
        
        i++; //Incrementa el valor de i en 1

    }
    
    return 0;
}