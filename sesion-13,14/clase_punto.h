#include<cmath> 
#include<stdio.h>
// Nota: agregamos cmath para poder usar pow() y sqrt()

class Punto{
    private:
        float x;
        float y;
    public:
        Punto(float _x,float _y); //Constuctor
        float getX(); // Obtener un valor
        float getY();
        void setX(float _x); // Modificar un valor
        void setY(float _y);
        void distancia(Punto punto_ent); // Recibiendo un objeto de la clase Punto
        void puntoMedio(Punto punto_ent);
        void pendiente(Punto punto_ent);
        void mostrar(); // Muestra un punto en terminal
};

//Definición del constructor de un Punto
Punto::Punto(float _x, float _y){
    this->x=_x;
    this->y=_y;
}

//Definiciones de los getters
float Punto::getX(){
    return this->x;
}

float Punto::getY(){
    return this->y; // Como y es float entonce también el método
}

//Definiciones de los setters
void Punto::setX(float _x){
    this->x=_x;
}

void Punto::setY(float _y){
    this->y=_y;
}

// Definción del método distancia:
void Punto::distancia(Punto punto_ent){
    float dist; // Variable local a el método distancia
    dist=sqrt(pow((this->x - punto_ent.getX()),2)+pow((this->y - punto_ent.getY()),2));
    cout<<"\n\t La distancia entre los puntos es: "<<dist;
}

// Definición del método puntoMedio()
void Punto::puntoMedio(Punto punto_ent){
    float x_pm;
    float y_pm;
    // Calculamos las coordenadas del punto medio:
    x_pm = (this->x + punto_ent.getX())/2;
    y_pm = (this->y + punto_ent.getY())/2;
    Punto punto_medio(x_pm,y_pm); // Este punto es local dentro de puntoMedio()
    cout<<"\n\t Punto medio entre los puntos es: ";
    punto_medio.mostrar();
}

void Punto::pendiente(Punto punto_ent){
    float pendiente;
    pendiente=(this->y-punto_ent.getY())/(this->x-punto_ent.getX());
    cout<<"\n\t La pendiente entre los puntos es: m = "<<pendiente;
}

void Punto::mostrar(){
    cout<<"\n\t P ( "<<this->x<<" , "<<this->y<<" )";
}
