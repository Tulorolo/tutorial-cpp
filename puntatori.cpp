#include <iostream>
using namespace std;

int main(){
    int dimVettore=5;
    int vett[dimVettore]={5,7,12,6,2};

    int* punt=&vett[2];     //creazione di puntatore a vettore che parte dalla cella 3

    cout<<*punt<<" puntato in cella "<<punt<<"\n";

    punt++;     //il puntatore punta alla cella successiva nel vettore

    cout<<*punt<<" puntato in cella "<<punt<<"\n";

    int& alias=vett[2];
    cout<<" alias in cella "<<alias<<"\n";


    alias++;        //modifica il valore nel vettore

    cout<<" alias in cella "<<alias<<"\n";

    punt--;

    cout<<*punt<<" puntato in cella "<<punt<<"\n";  //controlliamo che il valore sia davvero modificato
}