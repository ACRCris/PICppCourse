#include <iostream>
#include <vector>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 27 Bucle For 15/06/23
*/


int main(){
    
    vector<int> numeros;
    int num;

    cout<<"Introduce varios numeros. Escribe 0 para salir"<<endl;                        
    
    while (cin>> num && num != 0){  //El bucle while es bucle indeterminado, es decir, no se sabe cuantas veces se va a ejecutar el bucle
                                    //La condicion evaluar es si se pudo almacenar la variable con cin>> num y si esta es diferente de 0
        numeros.push_back(num);   
    }

    cout<<"Has introducido los siguientes numeros: "<<endl;

    for (int n : numeros) { //foreach es un bucle determinado, es decir, se sabe cuantas veces se va a ejecutar el bucle
        
        cout<<n<<endl;

    }
    
    
    return 0;
}