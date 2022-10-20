#include<iostream>
using namespace std;
#include "clase_punto.h"

int main(){

    // Los dos puntos están a la misma altura en y
    // Instancias de la clase Punto
    Punto punto_1(20,10);
    Punto punto_2(1,90);

    // Los muestro en pantalla
    punto_1.mostrar();
    punto_2.mostrar();

    // Calculamos la distancia con el método distacia
    punto_1.distancia(punto_2);

    // Calculamos el punto medio entre el punto_1 y punto_2
    punto_1.puntoMedio(punto_2);

    // Calculando la pendiente entre los dos puntos:
    punto_1.pendiente(punto_2);
    punto_2.pendiente(punto_1);

    cout<<"\n\n";
    return 0;
}
