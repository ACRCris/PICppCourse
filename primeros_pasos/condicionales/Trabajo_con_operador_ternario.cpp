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

        //La condicion creada en el anterio commit se puede simplificar con el operador ternario.

        string resultado = (num%2==0) ? " es par" : " es impar";        //El operador ternario es una estructura de control que permite simplificar la estructura if-else, es decir, es una estructura de control que permite evaluar una condicion y ejecutar un codigo u otro en funcion del resultado de la evaluacion de la condicion.
                                                                        // A diferencia de if no es una sentencia si uno una expresion que permite almacenar el resultado en una variable.
                                                                        //La sintaxis es la siguiente: (condicion) ? si es verdadero : si es falso
        cout<<"El numero "<<num<<resultado<<endl;

}