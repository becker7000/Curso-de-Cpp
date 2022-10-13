#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=10;i++){
        cout<<"\n\t |---Tabla del "<<i<<": ------|";
        for(int j=1;j<=10;j++){
            cout<<"\n\t |\t "<<i<<" * "<<j<<" = "<<(i*j);
        }
    }

    cout<<"\n\n";
    return 0;
}
