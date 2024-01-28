#include <iostream>
#include <vector>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 28 Bucle While 26/06/23.
*/


int main(){
    
    int num,suma=0; //Declaracion e inicializacion de dos variables de tipo entero en una misma linea

    cout<<"Introduce un numero (0 para salir): "<<endl;

    cin>>num;

    while (num != 0){
        
        suma += num; //suma = suma + num;

        cout<<"Introduce un numero (0 para salir): "<<endl;

        cin>>num;
    }
    
    cout<<"La suma total es: "<<suma<<endl;

    
    return 0;
}