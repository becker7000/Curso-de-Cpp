#include<iostream>
#include<cmath> // Nota: agregamos cmath para poder usar pow() y sqrt()
using namespace std;

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

void Punto::mostrar(){
    cout<<"\n\t P ( "<<this->x<<" , "<<this->y<<" )";
}

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

    cout<<"\n\n";
    return 0;
}
