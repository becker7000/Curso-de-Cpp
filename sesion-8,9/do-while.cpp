#include<iostream>
using namespace std;

int main(){

    int opcion;

    cout<<"\n\t Selecciona una opcion...";
    cout<<"\n\t |--------------------------|";
    cout<<"\n\t | 1) Opcion uno            |";
    cout<<"\n\t | 2) Opcion dos            |";
    cout<<"\n\t | 3) Opcion tres           |";
    cout<<"\n\t | 4) Opcion cuatro         |";
    cout<<"\n\t |--------------------------|";

    // Filtro para numeros entre 1 y 4:
    do{
        cout<<"\n\t | Opcion>";
        cin>>opcion;
    }while(opcion<1 || opcion>4);

    cout<<"\n\t Numero aceptado...";
    cout<<"\n\n";
    return 0;
}

/*
    Usamos el ciclo while cuando 
    no sabemos cuantas veces vamos 
    a repetir un bloque, pero sí la 
    condición bajo la cúal se va a repetir.

    En cambio usamos for cuando 
    sí sabemos cuantas veces vamos
    a repetir un bloque.

    Usamos do-while cuando queremos
    que el bloque de código se ejecute
    mínimo una vez.
*/

