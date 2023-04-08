/*Registrare le entrate di N aziende per M giorni
registrare le spese di N aziende per M giorni
mostrare incassi, spese e profitti giornalieri per ogni azienda
ottenere la media degli incassi per ogni azienda
ottenere la media dei profitti per ogni azienda
trovare l'azienda che ha generato più profitti
stampare i nomi delle aziende in ordine decrescente di profitto*/

#include <iostream>
#include <random>
using namespace std;

int main(){
    int n, m, off=10000;

    cout<<"quante aziende devi registrare?";
    cin>>n;
    cout<<"quanti giorni devi registrare?";
    cin>>m;

    int incassi[n][m], spese[n][m], profitti[n][m], azienda[n], mediaIncassi[n], mediaProfitti[n];

    int tempMedInc=0, tempMedProf=0;
    //input dati
    for(int i=0; i<n; i++){
        azienda[i]=i+1;
        for(int j=0; j<m; j++){
            incassi[i][j]=rand()%off;

            spese[i][j]=rand()%off;

            profitti[i][j]=incassi[i][j]-spese[i][j];

            tempMedInc+=incassi[i][j];
            tempMedProf+=profitti[i][j];
        }
        mediaIncassi[i]=tempMedInc/m;
        mediaProfitti[i]=tempMedProf/m;
        tempMedInc=0;
        tempMedProf=0;
    }

    //stampa incassi

    cout<<"\ntabella incassi\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<incassi[i][j]<<" ";
        }
        cout<<"\t"<<azienda[i]<<"\n";
    }

    //stampa spese
    cout<<"\ntabella spese\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<spese[i][j]<<" ";
        }
        cout<<"\t"<<azienda[i]<<"\n";
    }

    //stampa profitti
    cout<<"\ntabella profitti\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<profitti[i][j]<<" ";
        }
        cout<<"\t"<<azienda[i]<<"\n";
    }


    int numProfittiMaggiori=0, valProfittiMaggiori=mediaProfitti[0];
    //stampa medie
    cout<<"\ntabella media incassi/profitti\n";
    for(int i=0; i<n; i++){
        cout<<azienda[i]<<" "<<mediaIncassi[i]<<" "<<mediaProfitti[i]<<"\n";
        if(mediaProfitti[i]>valProfittiMaggiori){
            valProfittiMaggiori=mediaProfitti[i];
            numProfittiMaggiori=i;
        }
    }

    //azienda con profitto magigore
    cout<<"azienda con profitto maggiore: "<<azienda[numProfittiMaggiori]<<" con profitto: "<< valProfittiMaggiori<<"\n";
    

    //classifica profitti

        //copia
    int copiaAzienda[n], copiaMediaProfitti[n];
    for(int i=0; i<n; i++){
        copiaAzienda[i]=azienda[i];
        copiaMediaProfitti[i]=mediaProfitti[i];
    }

        //sorting
    int temp=0, temp2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(copiaMediaProfitti[j]<copiaMediaProfitti[j+1]){
                //oridnamento profitti
                temp=copiaMediaProfitti[j];
                copiaMediaProfitti[j]=copiaMediaProfitti[j+1];
                copiaMediaProfitti[j+1]=temp;
                //oridnamento azienda
                temp2=copiaAzienda[j];
                copiaAzienda[j]=copiaAzienda[j+1];
                copiaAzienda[j+1]=temp2;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<copiaAzienda[i]<<" : "<<copiaMediaProfitti[i]<< "\n";
    }
}