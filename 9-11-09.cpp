#include <iostream>

using namespace std;

/* questa procedura legge da tastiera i due numeri ed
esegue gli opportuni controlli sui valori inseriti */
void leggi_numeri(int& pri, int& sec,bool flag) //il bool flag serve per gestire l'inserimento dello 0,
{
	do{
cout << "Scrivi il primo numero positivo: ";
cin >> pri;
if (flag && pri==0) pri=-1; //non è permesso utilizzare lo zero nelle divisioni
}
while (pri<0);
do {
cout << "Scrivi il secondo numero positivo: " ;
cin >> sec;
if (flag && sec==0) sec=-1; //non è permesso utilizzare lo zero nelle divisioni
}
while (sec<0);
}
/* questa funzione calcola il quoziente della divisione
senza utilizzare il / */
int quoziente(int num1, int num2)
{
	int i=0;
	int f=0;
	int c=0;
while(c<=num1)
{
c+=num2;
f++;
}
if (c>num1 && c!=num1) 
{
	return f-1;
}
else return f;
}
/* questa funzione calcola il prodotto senza utilizzare
il * */
int prodotto(int num1, int num2)
{
	int f=0;
	int i=0;
while (i!=num2)
{
	f+=num1;
	i++;
	}	
	return f;
}
/* questa funzione calcola il resto della divisione senza
utilizzare il % */
int resto(int num1, int num2)
{
	int i=0;
	int f=0;
while (i!=quoziente(num1,num2))
{
	f+=num2;
	i++;
}
return num1-f;
}
int main ()
{
	char c;
	bool flag=false;
	int pri,sec,temp;
do{
	cout << "MENU'\n"
"a) Per calcolare il quoziente ed il resto della divisione tra due numeri positivi\n"
"b) Per calcolare il prodotto tra due numeri positivi\n"
"c) Per uscire dal programma\n"
"Scelta: ";
cin >> c;
	switch (c)
	{
		case 'a':{
			flag=true;
		leggi_numeri(pri,sec,flag);
    if (pri<sec)
  {
	temp=pri;
	pri=sec;
	sec=temp;
  }  
cout << "Il quoziente della divisione e': " << quoziente(pri,sec) << endl 
<< "Mentre il resto e': " << resto (pri,sec) << endl;
	
		}break;
		case 'b':{
			flag=false;
			leggi_numeri(pri,sec,flag);
    if (pri<sec)
  {
	temp=pri;
	pri=sec;
	sec=temp;
  } 
cout << "Il prodotto dei due numeri e': " << prodotto(pri,sec) << endl;			
		}break;
		case 'c':{}break;
		default : cout << "carattere non consentito" << endl;
	}
}
while (c!='c');
}
