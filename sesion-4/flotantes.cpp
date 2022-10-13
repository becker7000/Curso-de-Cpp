#include<iostream>
using namespace std;

int main(){

    float distancia_millas;
    float distancia_kilo;

    cout<<"\n\t Dame una distancia en millas: ";
    cin>>distancia_millas;

    distancia_kilo = distancia_millas*1.609;

    cout<<"\n\t "<<distancia_millas<<" millas equivalen a "<<distancia_kilo<<" kilometros";

    cout<<"\n\n";
    return 0;
    
}

/*
    Windows:
    Dev C++
    Code Block

    MacOS:
    XCode

    Linux:
    Nano
    Vim
    Vi

*/