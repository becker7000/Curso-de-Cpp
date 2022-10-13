#include<iostream>
#include<stdlib.h> // Para que funcione el exit(0), standard library
#include<conio.h> // console input output
using namespace std;

int main(){

    // system sólo en windows...
    system("title Mi calculadora");
    system("color 1B"); // El primer color es el fondo y el segundo la letra (color help)
    int opcion; // Selector

    // Atajo: alt + shift + abajo
    cout<<"\n\t +--------------------+";
    cout<<"\n\t | 1) Sumar           |";
    cout<<"\n\t | 2) Segunda opcion  |";
    cout<<"\n\t | 3) Tercera opcion  |";
    cout<<"\n\t | 4) Cuarta opcion   |";
    cout<<"\n\t | 5) Salir           |";
    cout<<"\n\t +--------------------+";
    cout<<"\n\t Opcion> "; cin>>opcion;

    // Este bloque reinicia el programa en caso de opción no valida...
    if( opcion<1 || opcion>5 ){
        cout<<"\n\t Por favor, escribe una opcion valida...";
        cout<<"\n\t Da [ENTER] para volver a intentar...";
        getch(); // Simula una pausa en el sistema
        system("cls"); // Podemos escribir comandos CMD/MS-DOS
        return main(); // Se inicia de nuevo la función main()
    }

    int x,y;
    switch(opcion){ // El selector puede ser int o char
        case 1:
            cout<<"\n\t Escribe dos numeros para sumarlos (separalos con espacio)";
            cout<<"\n\t entrada> "; cin>>x>>y; // Así guardamos dos valores
            cout<<"\n\t La suma es: "<<(x+y);
            break;
        case 2:
            cout<<"\n\t Soy la segunda opcion";
            break;
        case 3:
            cout<<"\n\t Soy la tercera opcion";
            break;
        case 4:
            cout<<"\n\t Soy la cuarta opcion";
            break;
        case 5: 
            cout<<"\n\t Saliendo...";
            cout<<"\n\n";
            exit(0); // Retorna un valor 0 al sistema y termina el programa...
            break;           
        default:
            cout<<"\n\t Opcion no contemplada...";
            break;
    }

    cout<<"\n\n";
    return 0;
}
