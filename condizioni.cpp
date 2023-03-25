#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"inserisci n ";
    cin>>n;

    if(n==0){
        cout<<"hai scelto l'opzione zero";
    }
    else{
        cout<<"hai scelto un'altra opzione";
    }


    n=0;
    cout<<"\ninserisci n ";
    cin>>n;

    if(n==0){
        cout<<"hai scelto l'opzione zero";
    }
    else if(n==1){
        cout<<"hai scelto l'opzione uno";
    }
    else if(n==2){
        cout<<"hai scelto l'opzione due";
    }


    n=0;
    cout<<"\ninserisci n ";
    cin>>n;

    switch(n){
        case 0:
            cout<<"hai scelto l'opzione zero";
            break;
        case 1:
            cout<<"hai scelto l'opzione uno";
            break;
        case 2:
            cout<<"hai scelto l'opzione due";
            break;
    }

    cout<<"\ninserisci n pari ";
    cin>>n;
    bool controllo=false;
    if(n%2==0){
        controllo=true;
    }
    
    if(controllo=true){
        cout<<"il numero è pari";
    }
    if(controllo=true){
        cout<<"il numero non è pari";
    }

}