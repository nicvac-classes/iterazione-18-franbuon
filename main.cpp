#include <iostream>
using namespace std;

int main() {
    int i;
    float livello, somma, media;
    somma=0;
    i=1;
    while(i<=7)
    {
        cout<<"A quanto arriva il livello dell'acqua?"<<endl;
        cin>>livello;
        somma=somma+livello;
        if(somma>10)
        {
            cout<<"Il livello dell'acqua supera i 10cm"<<endl;
        }
        else
        {
            cout<<"Il livello dell' acqua non supera i 10cm"<<endl;
        }
        i=i+1;
    }
    media=somma/7;
    if(media>0)
    {
        cout<<"Acqua alta";
    }
    else
    {
        cout<<"Livello normale";
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
