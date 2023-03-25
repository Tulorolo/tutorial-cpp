#include <iostream>
using namespace std;

int main(){
    int mat[5][5];

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"inserisci valore in pos: "<<i<<" "<<j<<" ";
        cin>>mat[i][j];
        }
    }

    cout<<"ecco la matrice:\n";
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}