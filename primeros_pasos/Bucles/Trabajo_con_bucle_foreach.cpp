#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 27 Bucle For 15/06/23
*/


int main(){
    
    string email = "juan@pildorasinformaticas.es";

    for(auto s:email){  //La sintaxis del bucle for each es la siguiente: for (tipo_de_dato variable:array) {codigo a ejecutar}
                        //La palabra reservada auto se utiliza para usar la inferencia de tipos del compilador.
        if(s == '@'){
            cout<<"En contre la @";
        }
    }
                        
   
    
    return 0;
}