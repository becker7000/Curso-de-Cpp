#include<iostream>
using namespace std;
#include<C:\Users\Erick\Documents\Lenguaje C++\codes\sesion-13,14,15\clase_circulo.h>
// OJO: aquí le pones la ruta absoluta de tu archivo en tu compu 

class lista_circulos{

    private:
        Circulo* circulos[5]; // Arreglo de apuntadores (5 circulos)
    
    public:
        lista_circulos(); // El constructor no requiere parametros
        void mostrar_lista();

};

// Definición del constructor de la clase lista_circulos
lista_circulos::lista_circulos(){
    float radio_auxiliar; // Variable auxiliar
    for(int i=0;i<5;i++){
        cout<<"\n\t Escribe el radio del circulo #"<<(i+1)<<": ";
        cin>>radio_auxiliar;
        this->circulos[i] = new Circulo(radio_auxiliar);
    }
}

// Definición del método mostrar_lista()
void lista_circulos::mostrar_lista(){
    cout<<"\n  >>>> Lista de los circulos >>>> \n";
    for(int i=0;i<5;i++){
        this->circulos[i]->mostrar();
    }
}

/*


    Ejemplo de ruta relativa:
        clase_circulo.h

    Ejemplo de ruta absoluta:
        C:\Users\Erick\Documents\Lenguaje C++\codes\sesion-13,14,15\clase_circulo.h

    Un arreglo es un conjunto de direcciones en memoria RAM
    que estan juntas y estas direcciones guardan datos según 
    algún tipo determinado (int,float,char,Circulo), el tipo
    determina el tamaño del arreglo en bytes.


*/
