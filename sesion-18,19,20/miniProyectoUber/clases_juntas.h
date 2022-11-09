#include<iostream>
using namespace std;

class Persona{
    protected:
        string nombre;
        string telefono;
    public:
        Persona(string _nombre, string _telefono);
        virtual void mostrar();
};

Persona::Persona(string _nombre,string _telefono){
    this->nombre=_nombre;
    this->telefono=_telefono;
}

void Persona::mostrar(){
    cout<<"\n\t Nombre: "<<nombre;
    cout<<"\n\t Telefono: "<<telefono;
}

//----------------------------------

class Conductor : public Persona{
    private:
        string id_matricula;
    public:
        Conductor(string _nombre,string _telefono,string _id_matricula);
        void mostrar(); // Este es el protipo para sobreescribir el método virtual    
};

Conductor::Conductor(string _nombre,string _telefono,string _id_matricula) : Persona(_nombre,_telefono){
    this->id_matricula = _id_matricula;
}

void Conductor::mostrar(){
    cout<<"\n\n\t CONDUCTOR: ";
    Persona::mostrar();
    cout<<"\n\t ID matricula: "<<id_matricula;
}

//-----------------------------------------
class Pasajero : public Persona{
    private: 
        string email;
    public:
        Pasajero(string _nombre,string _telefono,string _email);
        void mostrar();    
};

Pasajero::Pasajero(string _nombre,string _telefono,string _email): Persona(_nombre,_telefono){
    this->email=_email;
}

void Pasajero::mostrar(){
    cout<<"\n\n\t PASAJERO: ";
    Persona::mostrar();
    cout<<"\n\t Email: "<<this->email;
}