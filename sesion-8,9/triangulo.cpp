#include<iostream>
using namespace std;

int main(){

    int pisos,i=0,j;

    cout<<"\n\t Cuantos pisos? R: ";
    cin>>pisos;

    while(i<=pisos){
        cout<<"\n\n";
        j=0;
        while(j<i){
           cout<<"\t *";
           j++; 
        }
        i++;
    }

    cout<<"\n\n";
    return 0;
}
