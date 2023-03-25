#include <iostream>
using namespace std;

int main(){
    int a[3]={3, 6, 12};
    for(int i=0; i<3; i++){
        cout<<a[i]<<" ";
    }

    int dimVettore=0;
    cout<<"dimensione vettore: ";
    cin>>dimVettore;
    int b[dimVettore];

    for(int i=0; i<dimVettore; i++){
        cout<<"inserisci valore in pos: "<<i<<" ";
        cin>>b[i];
    }

    cout<<"\n ecco il vettore\n";
    for(int i=0; i<dimVettore; i++){
        cout<<b[i]<<" ";
    }



    int temp=0;
    for(int i=0; i<dimVettore; i++){
        for(int j=0; j<dimVettore-1; j++){          //bubble sort
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }

    cout<<"\n ecco il vettore ordinato\n";
    for(int i=0; i<dimVettore; i++){
        cout<<b[i]<<" ";
    }
}