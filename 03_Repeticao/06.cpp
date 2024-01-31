/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
 Dada a massa inicial, em gramas, fazer um algorítimo que determine o tempo 
 necessário para que essa massa se torne menor do que 0,5 gramas. Escreva a 
 massa inicial, a massa final e o tempo calculado em horas, minutos e segundos.
*/
# include<iostream>
# include<stdlib.h>
# include<math.h>
using namespace std;
int main ()
{
float mi;

// at= armazenamento de tempo
int at,c;
c=0,at=0;	

cout<<"massa inicial"; 
cin>>mi;

while(mi>0.5)	
{

mi=mi/2;


c=c+1;
at=at+50;
}	


cout<<"a massa final";
cout<<mi;
cout<<"horas";
cout<<at/3600;
cout<<"minutos"; 
cout<<at/60;
cout<<"segundos";
cout<<at;

}
