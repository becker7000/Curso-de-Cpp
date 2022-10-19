#include<iostream>
using namespace std;
#include "clase_punto.h" // Ya puedo crear lo que quiera de punto

int main(){

    // Declarando dos objetos de la clase punto
    Punto p1(3.5,8.1);
    Punto p2(8.3,10);
    
    // Usando los métodos de la clase punto
    p1.setX(5);
    p1.mostrar();
    p2.mostrar();
    p1.distancia(p2);
    p1.pendiente(p2);
    p1.puntoMedio(p2);

    cout<<"\n\n";
    return 0;
}
