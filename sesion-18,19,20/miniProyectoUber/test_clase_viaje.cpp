#include<iostream>
using namespace std;
#include "clase_viaje.h"

int main(){

    Conductor* con1 = new Conductor("Pepe","5512345678","pq77");
    Pasajero* pas1 = new Pasajero("Karla","5501928374","kar01@gmail.com");
    Pasajero* pas2 = new Pasajero("Lalo","5509876543","lal919@gmail.com");
    Pasajero* pas3 = new Pasajero("Maria","5500119992","mar_02@gmail.com");

    Viaje viaje_1("Lindavista","Roma Norte",130.78);
    viaje_1.agregarConductor(con1);
    viaje_1.agregarPasajeros(pas1,pas2,pas3);
    viaje_1.mostrarDatosViaje();

    // Usando polimorfismo:
    //con1->mostrar();
    //pas1->mostrar();

    cout<<"\n\n";
    return 0;
}