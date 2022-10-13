#include<iostream>
using namespace std;

int main(){

    int entero;
    cout<<"\n\t Dame un numero entero: ";
    cin>>entero;

    // if-else encadenados
    if(entero>0){
        cout<<"\n\t El numero es positivo";
    }else if(entero<0){
        cout<<"\n\t El numero es negativo";
    }else{
        cout<<"\n\t El numero es exactamente cero";
    }

    cout<<"\n\n";
    return 0;
}

/*
    Operadores relacionales:

    > mayor que
    < menor que
    >= mayor o igual que 
    <= menor o igual que 
    == igual que 
    != diferente de 

    int edad=20; declaración con inicialización   
    operador de asignación

    = asignación (guarda un valor en una variable)
    == igual que (compara dos valores, da verdarero si son iguales y falso sino)

    Operadores lógicos:

    && AND
    || OR
    ! NOT

    El operador and es un operador binario (ocupa dos variables)
    y va en medio, es decir, es infijo.

    Tabla de verdad: 
    x \ y \ x&&y
    V \ V \  V
    V \ F \  F
    F \ V \  F
    F \ F \  F

    El operador or es un operador binario y es infijo.

    Tabla de verdad:
    x \ y \ x||y
    V \ V \  V
    V \ F \  V
    F \ V \  V
    F \ F \  F

    El operador not es un operador unario y es prefijo.


    Tabla de verdad:

    x  \ !x
    V  \  F
    F  \  V

*/