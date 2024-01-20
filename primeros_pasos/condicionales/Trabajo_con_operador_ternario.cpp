#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 24 Operador Ternario 12/05/23
*/


int main(){

        int num; 

        cout<<"Introduce un n° entero: "<<endl;  

        cin>>num;

        if(num%2==0)
                cout<<"El numero "<<num<<" es par"<<endl;
        else
                cout<<"El numero "<<num<<" es impar"<<endl;

        return 0;

}