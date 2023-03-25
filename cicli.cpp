#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"quanti giri vuoi fare? ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"\ngiro "<<i;
    }

    int i=0;
    while(n<i){
        cout<<"\ngiro "<<i;
        i++;
    }

    i=0;
    while(n<i){
        cout<<"\ngiro "<<i;
        if(i==5){
            cout<<" questo è il quinto giro!";
        }
        i++;
    }

    for(int i=0; i<n; i++){
        cout<<"\ngiro "<<i;
        if(i%2==0){
            cout<<" giro pari";
        }
        else{
            cout<<" giro dispari";
        }
    }

    int temp=0;
    bool continua=true;
    for(int i=0; i<n&&continua==true; i++){
        cout<<"\ninserisci numero: ";
        cin>>temp;
        if(temp==5){
            continua=false;
        }
    }
}