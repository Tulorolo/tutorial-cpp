#include <iostream>
using namespace std;

int main()
{
    
    int intero=5;

    float virgola=5.6;

    double virgolaDoppia=5.6;

    char carattere='a';

    string stringa="parola";

    bool booleano=true;


    int a=5;
    int b=12;
    int c=0;
    cout<<"a:" << a << " b:" << b << " c:" << c << "\n";        //concatenzazione di output

    c=a+b;      //somma
    cout<<"a:" << a << " b:" << b << " c:" << c << "\n";

    c=a-b;      //differenza
    cout<<"a:" << a << " b:" << b << " c:" << c << "\n";

    int d=b/a;      //divisione intera                                    
    int e=b%a;      //resto
    int f=b*a;      //moltiplicazione
    cout<<"d:" << d << " e:" << e << " f:" << f << "\n";

        //inserimento dati
    cout<<"inserisci a: ";
    cin>>a;
    cout<<"inserisci b: ";
    cin>>b;

    c=a+b;    
    cout<<"a:" << a << " b:" << b << " c:" << c << "\n";

    c=a-b;    
    cout<<"a:" << a << " b:" << b << " c:" << c << "\n";

    d=b/a;      
    e=b%a;      
    f=b*a;      
    cout<<"d:" << d << " e:" << e << " f:" << f << "\n";

        //strings
    string parola1="ciao";
    string parola2=" amici";
    cout<<parola1+parola2<<"\n";        //concatenzione in output senza <<
    parola2=parola1+parola2;        //concatenazione distring
    cout<<parola2;
}