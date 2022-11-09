#include<iostream>
using namespace std;

class Ruta{
    private:
        string origen;
        string destino;
    public:
        Ruta(string _origen,string _destino);
        void setOrigen(string _origen);
        void setDestino(string _destino);
        void mostrarRuta();    
};

Ruta::Ruta(string _origen,string _destino){
    this->origen=_origen;
    this->destino=_destino;
}

void Ruta::setOrigen(string _origen){
    this->origen=_origen;
}

void Ruta::setDestino(string _destino){
    this->destino=_destino;
}

void Ruta::mostrarRuta(){
    cout<<"\n\n\t Datos de la ruta: ";
    cout<<"\n\t Origen: "<<origen;
    cout<<"\n\t Destino: "<<destino;
}