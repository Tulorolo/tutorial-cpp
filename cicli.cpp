#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"quanti giri vuoi fare? ";
    cin>>n;

    for(int i=0; i<n; i++){     //ciclo da n giri
        cout<<"\ngiro "<<i;
    }

    int i=0;
    while(i<n){                 //while equivalente al ciclo precedente
        cout<<"\ngiro "<<i;
        i++;
    }

    cout<<"\n";

    i=0;
    while(i<n){
        cout<<"\ngiro "<<i;
        if(i==3){               //condizione in while
            cout<<" questo e' il terzo giro!";
        }
        i++;
    }

    for(int i=0; i<n; i++){
        cout<<"\ngiro "<<i;
        if(i%2==0){            //dimostrazione di un for più complesso
            cout<<" giro pari";
        }
        else{
            cout<<" giro dispari";
        }
    }


    int temp=0;
    bool continua=true;
    for(int i=0; i<n&&continua==true; i++){         //for con condizione di terminamento avanzata
        cout<<"\ninserisci numero: ";
        cin>>temp;
        if(temp==5){
            continua=false;
        }
    }

}