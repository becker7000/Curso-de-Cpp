#include<iostream>
using namespace std;

class Producto{
    private:
        int id;
        string nombre;
        string descripcion;
        float precio;
    public:
        Producto(int _id, string _nombre, string _descripcion, float _precio);
        string getNombre();
        void setNombre(string _nombre);
        // void setDescripcion(string _descripcion);
        // string getDescripcion();
        // void setPrecio(float _precio);
        // float getPrecio();
        void mostrarProducto();
};

//Definición del constructor
Producto::Producto(int _id,string _nombre,string _descripcion,float _precio){
    this->id=_id;
    this->nombre=_nombre;
    this->descripcion=_descripcion;
    this->precio=_precio;
}

//Definción del getter(nos ayuda a obtener el valor de un atributo)
string Producto::getNombre(){
    return this->nombre;
}

//Definción del setter(nos ayuda a modificar el valor de un atributo)
void Producto::setNombre(string _nombre){
    this->nombre=_nombre;
}

//Definición del método o función mostrarProducto
void Producto::mostrarProducto(){

    cout<<"\n\t +------------------------------+";
    cout<<"\n\t | Nombre: "<<this->nombre;
    cout<<"\n\t | Descricion: "<<this->descripcion;
    cout<<"\n\t | Precio: $"<<this->precio;
    cout<<"\n\t +------------------------------+";

}

int main(){ // Solamente se va a ejecutar lo que está dentro de éste bloque

    Producto prod_1(1,"Sabritas","Papas",22.49);
    Producto prod_2(2,"Oreo","Galletas",19.99);
    Producto prod_3(3,"Coca cola","Refresco",28.99);

    prod_1.mostrarProducto();
    prod_2.mostrarProducto();
    prod_3.mostrarProducto();

    cout<<"\n\n";
    return 0;
}