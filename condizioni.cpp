#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"inserisci n ";
    cin>>n;

    if(n==0){           //la condizione deve avere sempre come risultato un valore booleano
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

    switch(n){          //prende la var n e va a cercare nei case il valore corrispondente altrimenti salta (default omesso)
        case 0:
            cout<<"hai scelto l'opzione zero";
            break;
        case 1:
            cout<<"hai scelto l'opzione uno";
            break;
        case 2:
            cout<<"hai scelto l'opzione due";
            break;
        default:
            cout<<"opzione non presente";
    }

    cout<<"\ninserisci n pari ";
    cin>>n;
    bool controllo=false;
    if(n%2==0){
        controllo=true;
    }

    //controllo=n%2==0;  <<  totalmente equivalente alle righe 50/53
    
    if(controllo==true){
        cout<<"il numero e' pari";
    }
    if(controllo==false){
        cout<<"il numero non e' pari";
    }

}