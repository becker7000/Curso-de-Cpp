#include<iostream>
using namespace std;

int main(){

    int edad; // Variable de tipo entera

    cout<<"\n\t Dame tu edad: ";
    cin>>edad;

    if(edad >= 18){
        cout<<"\n\t Eres mayor de edad...";
    }else{
        cout<<"\n\t Eres menor de edad...";
    }

    cout<<"\n\n";
    return 0;
}

/**
 * Las estructuras de control nos ayudan a que un programa
 * tome decisiones o repita un bloque de código determinadas veces.
 * 
 * Existen 2 tipo de estructuras de control
 * 
 *  1) Selección: if, switch, ternario
 *  2) Repetición: while,for,do-while
 * 
*/
