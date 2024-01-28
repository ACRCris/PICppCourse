#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 27 Bucle For 15/06/23
*/


int main(){
    
    double salario[] = {1500.25,2500.50}; //Declaracion e inicializacion de un array de tipo entero.

    for(auto s:salario){    //La sintaxis del bucle for each es la siguiente: for (tipo_de_dato variable:array) {codigo a ejecutar}
                            //La palabra reservada auto se utiliza para usar la inferencia de tipos del compilador.
        cout<<s<<endl;   
    }
                        
   
    
    return 0;
}