#include <iostream>
using namespace std;

/*
    Curos de c++ del canal pildoras informaticas.
    Video 23 Switch-Case 08/05/23
*/


int main(){
    
    char idioma, categoria; // El ambito de esta variable es el main, no se puede acceder a ella desde fuera pero si desde de cualquier estructura de control dentro del main commo el switch

    cout<<"Seleccione un idioma. por favor (E: Espanol, I: Ingles)"<<endl;

    cin>>idioma;

    switch(idioma){
        case 'E': 
        case 'e': //Evalua la misma condicion que el case anterior, es decir, si idioma es igual a 'E' o 'e' se ejecuta el codigo de este case
                cout<<"Seleccione la categoria (L: Libros, R: Ropa, T: Tecnologia)"<<endl;
                cin>>categoria;

                switch (categoria){
                        case 'L':
                        case 'l':
                                cout<<"Ha escogido la categoria de libros"<<endl;
                                break;
                        
                        case 'R':
                        case 'r':
                                cout<<"Ha escogido la categoria de ropa"<<endl;
                                break;

                        case 'T':
                        case 't':
                                cout<<"Ha escogido la categoria de tecnologia"<<endl;
                                break;
                        
                        default:
                                cout<<"Categoria NO valida"<<endl;
                                break;
                }     
                break;
        
        case 'I':
        case 'i':
                cout<<"Select a category (B: Books, C: Clothing, T: Technology)"<<endl;
                cin>>categoria;

                switch (categoria){
                        case 'B':
                        case 'b':
                                cout<<"You have selected Books category"<<endl;
                                break;
                        
                        case 'C':
                        case 'c':
                                cout<<"You have selected Clothes category"<<endl;
                                break;

                        case 'T':
                        case 't':
                                cout<<"You have selected Technology category"<<endl;
                                break;
                        
                        default:
                                cout<<"Invalid category"<<endl;
                                break;
                }     
                break;
        
        default:
                cout<<"Idioma no valido"<<endl;
                break;

    }

    return 0;

}