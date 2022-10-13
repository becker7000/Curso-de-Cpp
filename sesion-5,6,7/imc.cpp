#include<iostream>
using namespace std; // Espacio de nombres...

int main(){

    // Índice de masa corporal
    // Es un valor que nos ayuda a saber mediante una referencia
    // como está nuestro peso...

    float peso, estatura,imc; // ENTRADA
    string mensaje; // Este tipo de dato me ayuda a guardar una cadena

    cout<<"\n\t Dame tu peso (kg): "; // SALIDA
    cin>>peso; // Guardamos un valor en una variable (ENTRADA)
    cout<<"\n\t Dame tu estatura (m): "; // SALIDA
    cin>>estatura; // ENTRADA

    // Linealización:
    imc = peso / (estatura*estatura); // CÁLCULO
    cout<<"\n\t Tu indice de masa corporal es: "<<imc; // SALIDA

    if(imc<16.0){
        mensaje="Delgadez severa";
    }else if(imc>=16.0 && imc<17.0){
        mensaje="Delgadez moderada";
    }else if(imc>=17.0 && imc<18.5){
        mensaje="Delgadez leve";
    }else if(imc>=18.5 && imc<25.0){
        mensaje="Peso normal";
    }else if(imc>=25.0 && imc<30.0){
        mensaje="Preobesidad";
    }else if(imc>=30.0 && imc<35.0){
        mensaje="Obesidad leve";
    }else if(imc>=35.0 && imc<40){
        mensaje="Obesidad media";
    }else{ // Aquí está el imc>=40
        mensaje="Obesidad morbida";
    }

    cout<<"\n\t Resultado preliminar: "<<mensaje;
    cout<<"\n\n";
    return 0;
}




