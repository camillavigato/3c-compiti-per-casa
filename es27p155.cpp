
#include <iostream>
#define MAX 7 		//n° massimo di elementi dell'array
using namespace std;
int main(){
int n;
float media, temp[MAX], somma=0, dev;


cout<<"Inserisci il numero dei giorni [1 - "<<MAX<<"]: ";
cin>>n;
while (n<1 || n>MAX){      //rilegge la dimensione dell'array finchè non ne viene inserita una valida
	cout<<"La dimensione dell'array deve essere compresa tra 1 e "<<MAX<<"\n";
	cout<<"Reinserisci la dimensione dell'array: ";
	cin>>n;
}

/*caricamento dell'array da tastiera*/
for (int x=0; x<n; x++){
	cout<<"Inserisci la temperatura del "<<x+1<<" giorno: ";
	cin>>temp[x];
	
	somma+=temp[x];                  //calcolo somma delle temperature
}
media=somma/n;
cout<<"La media delle temperature inserite e' "<<media << endl;
for (int x=0; x<n; x++){	
    dev= temp[x] - media;
	cout<<" la deviazione del "<<x+1<<" giorno: " << dev << endl;;


}
}
