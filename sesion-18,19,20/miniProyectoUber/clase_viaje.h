#include<iostream>
using namespace std;
#include "clases_juntas.h"
#include "clase_ruta.h"

class Viaje{
    private:
        Conductor* conductor; // Agregación
        Pasajero* pasajeros[3]; // Agregación
        Ruta* ruta; //Composición
        float costo;
    public:
        Viaje(string _origen,string _destino,float _costo);
        void agregarConductor(Conductor* _conductor);
        void agregarPasajeros(Pasajero* pass1,Pasajero* pass2,Pasajero* pass3);
        void mostrarDatosViaje();   
};

Viaje::Viaje(string _origen,string _destino,float _costo){
    this->ruta=new Ruta(_origen,_destino);
    this->costo=_costo;
}

void Viaje::agregarConductor(Conductor* _conductor){
    this->conductor = _conductor;
}

void Viaje::agregarPasajeros(Pasajero* pass1,Pasajero* pass2,Pasajero* pass3){
    this->pasajeros[0]=pass1;
    this->pasajeros[1]=pass2;
    this->pasajeros[2]=pass3;
}

void Viaje::mostrarDatosViaje(){
    cout<<"\n\n\t Datos completos del viaje: ";
    this->ruta->mostrarRuta();
    cout<<"\n\t Costo: $"<<this->costo;
    this->conductor->mostrar();
    int i;
    for(i=0;i<3;i++){
        this->pasajeros[i]->mostrar();
    }
}