/*
    Curos de c++ del canal pildoras informaticas.
    Video 10 Ejemplo sencillo 31/10/22

    Simulador de compra de piso laminado.
    Recibe los metros cuadrados de calidad media, luego recibe los metros cuadrados de calidad alta.
    Calcula el subtotal de cada tipo de piso, luego calcula el total de cada piso y por ultimo calcula el total de la compra.
    Muestra el valor en consola.
*/

#include <iostream> //Directiva de preprocesador include para incluir iostream libreria estandar de c++ que permite operaciones de entrada y salida
using namespace std;// Uso de espacio de nombre std implicito en todo el codigo

int main(){

    cout<<"BIEVENIDO AL SERVICIO DE INSTALACION DE PISOS LAMINADOS"<<endl;

    int metros_cuadrados_piso_calidad_media {0}; //Declaracion e inicializacion de lista de variable de tipo entero
    
    cout<<"\n¿Cuantos metros quieres instalar con calidad media?: "; //\n es un caracter de escape que permite hacer un salto de linea en la consola similar a endl

    cin>>metros_cuadrados_piso_calidad_media; //cin es una funcion de la libreria iostream que permite leer de consola y almacenar en una variable de cualquier tipo, en este caso int

    int metros_cuadrados_piso_calidad_alta {0}; //...

    cout<<"\n¿Cuantos metros quieres instalar con calidad alta?: "; //...

    cin>>metros_cuadrados_piso_calidad_alta; //...

    const double precio_calidad_media {35.5}; //Declaracion e inicializacion por lista de constante de tipo double.

    const double precio_calidad_alta {55.3}; //...

    const double iva {0.21}; //...

    const int expira_presupuesto {30}; //...
    

    cout<<"\nPresupuesto para la instalacion de pisos laminados"<<endl;

    cout<<"Numero de metros de calidad media: "<<metros_cuadrados_piso_calidad_media<<endl;

    cout<<"Numero de metros de calidad alta: "<<metros_cuadrados_piso_calidad_alta<<endl;

    cout<<"Precio piso laminado calidad media: "<<precio_calidad_media<<"€"<<endl;

    cout<<"Precio piso laminado calidad alta: "<<precio_calidad_alta<<"€"<<endl;

    cout<<" IMPORTE: ";

    double subtotal_calidad_media = precio_calidad_media*metros_cuadrados_piso_calidad_media; 
    double subtotal_calidad_alta = precio_calidad_alta*metros_cuadrados_piso_calidad_alta;
    double subtotal = subtotal_calidad_media + subtotal_calidad_alta;

    cout<<subtotal<<"€"<<endl; //comando para simbolos de euro alt+0128 

    cout<<" IVA: ";

    cout<<subtotal*iva<<"€"<<endl;

    cout<<"=========================================="<<endl;

    cout<<" IMPORTE TOTAL: ";

    cout<<subtotal*(1+iva)<<"€"<<endl; 

    cout<<" presupuesto valido durante "<<expira_presupuesto<<" dias";

    return 0;

    /*
        C++ No es WORA (Write Once Run Anywhere) como Java, es decir que la ejecuion de un programa en c++ depende de la arquitectura del computador
    */ 

}



