#include <iostream>
using namespace std;

int main(){
    int dimVettore=5;
    int vett[dimVettore]={5,7,12,6,2};

    int* punt=&vett[2];

    cout<<*punt<<" puntato in cella "<<punt<<"\n";

    punt++;

    cout<<*punt<<" puntato in cella "<<punt;
}