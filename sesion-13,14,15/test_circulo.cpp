#include<iostream>
using namespace std;
#include "clase_circulo.h"
#include "clase_punto.h"

int main(){

    // Tenemos dos formas de crear Circulos con o sin parametros
    Circulo cir1;
    Circulo cir2(7.2);
    Circulo cir3(cir2);

    // Mostramos en pantalla los Circulos:
    cir1.mostrar();
    cir2.mostrar();
    cir3.mostrar();

    // Creamos dos puntos y mostramos su ecuación:
    Punto pt1(2,2);
    Punto pt2(4,4);
    pt1.ecuacionConica(pt2);

    cout<<"\n\n";
    return 0;
}