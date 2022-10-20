#include<iostream>
using namespace std;

class Circulo{
    private:
        float radio;
    public: // Sobrecargando el constructor
        Circulo(); // Primer constructor    
        Circulo(float _radio); // Segundo constructor
        Circulo(const Circulo &cir); // Tercer constructor
        float getRadio();
        void mostrar();
};

Circulo::Circulo(){
    this->radio=1; // En caso de que el usuario de la clase
} // Circulo decida no poner parametros se va a crear un Circulo
// de radio 1 por defecto...

// Definición del segundo constructor 
// Ahora sí pedimos un parámetro...
Circulo::Circulo(float _radio){
    this->radio=_radio;
}

// Definición del tercer constructor: 
Circulo::Circulo(const Circulo &cir){
    this->radio=cir.radio;
}

float Circulo::getRadio(){
    return this->radio;
}

void Circulo::mostrar(){
    cout<<"\n\t El radio es: "<<this->radio;
}

/*
    La sobrecarga de métodos es 
    la tecnica en la que escribimos y declaramos 
    el mismo método y lo definimos varias veces
    pero con diferentes configuraciones en los 
    parametros que recibe, así entonce C++
    puede indentificar el comportamiento especifico 
    solicitado...
*/