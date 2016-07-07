/*
Il programma dovrà attraverso un Menù leggere da tastiera se l'utente vuole:
1. calcolare il quoziente ed il resto di una divisione tra interi (carattere a);
2. calcolare il prodotto tra interi (carattere b);
3. uscire dal programma (carattere c);
Fatta la scelta dal Menù il programma dovrà:
1. leggere dalla tastiera due numeri interi attraverso l'apposita funzione, tale lettura dovrà ripetersi finché
non ne siano immessi due entrambi positivi e nel caso della divisione lo zero non sarà ammesso;
2. nel caso si sia scelto di fare la divisione, calcolare e stampare a video il QUOZIENTE ed il RESTO della
divisione intera del MAGGIORE dei due per il MINORE, attraverso le due apposite funzioni;
3. nel caso si sia scelto di fare il prodotto, calcolare e stampare a video il PRODOTTO dei due numeri
attraverso l'apposita funzione;
*/
#include <iostream>
using namespace std;
void leggi_numeri(int& pri, int& sec, bool flag);
int resto(int num1, int num2);
int quoziente(int num1, int num2);
int prodotto(int num1, int num2);
int main()
{
    char s;
    int num1=0,num2=0;
    bool flag;
    do{
        cout << "\nMENU'\n";
        cout << "a) Per calcolare il quoziente ed il resto della divisione tra due numeri positivi\n";
        cout << "b) Per calcolare il prodotto tra due numeri positivi\n";
        cout << "c) Per uscire dal programma\n";
        cout << "Scelta: ";
        cin>>s;
        switch(s){
        case 'a':{
            flag=true;
            leggi_numeri(num1,num2,flag);
            cout<<"il quoziente è "<<quoziente(num1,num2)<<endl;
            cout<<"il resto è "<<resto(num1,num2)<<endl;
        break;
        }
        case 'b':{
            flag=false;
            leggi_numeri(num1,num2,flag);
            cout<<"il prodotto è "<<prodotto(num1,num2)<<endl;
        break;
        }
        case 'c':{
        break;
        }
        default:{
            cout<<"lettera non consentita"<<endl;
        break;
        }
        }
    }while(s!='c');
    return 0;
}


void leggi_numeri(int& pri, int& sec, bool flag){
do{
    if(flag==true){
        cout<<"inserisci il primo"<<endl;
        cin>>pri;
        cout<<"inserisci il secondo"<<endl;
        cin>>sec;
        if(pri<0||sec<=0){//se i numeri sono minori di zero o nel caso del divisore maggiore per forza di 0
            cout<<"la divisione non è possibile per zero"<<endl;
        }
    }
    if(flag==false){
        cout<<"inserisci il primo"<<endl;
        cin>>pri;
        cout<<"inserisci il secondo"<<endl;
        cin>>sec;
        if(pri<0||sec<0){
            cout<<"non sono possibili numeri negativi"<<endl;
        }
    }
}while(pri<0||sec<=0);
}

int quoziente(int num1, int num2){

    int i=0;
 while(num1>=num2){//finchè num1 non rimane maggiore o uguale a num2.
    num1-=num2;//effettua delle sottrazioni tra se stesso e num2.
    i++;//incrementa il contatore che ci servira per sapere il risultato.
 }
 return i;
}

/*
int i=0;
for (;num1>=num2;){//medesima cosa fatta con il for (alquanto inutile usare il for)
    num1-=num2;
    i++;
}
return i;
}
*/

int resto(int num1, int num2){
 while(num1>=num2){//fa la stessa cosa al quoziente
    num1-=num2;
 }
 return num1;//ma ritorna num1 che è il rimanente della sottrazione tra num1 e num2
}


int prodotto(int num1, int num2){
int mol=0;
while(num2!=0){//finche num 2 non arriva a zero
    mol+=num1;//fa la somma tra mol e num1
    num2--;//decremeta il num2 per farlo arrivare a zero
}
return mol;
}

//Coded by DarkCerfa
