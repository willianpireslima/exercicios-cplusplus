/*
O dia da semana para uma data qualquer pode ser calculado pela seguinte f�rmula: 
Dia da semana = RESTO(QUOCIENTE(2,6 x M � 0,2), 1) + D + A + QUOCIENTE(A,4) +
 QUOCIENTE(S,4) � 2 x S), 7) 
Onde: 
M � representa o n�mero do m�s. Janeiro e fevereiro s�o os meses 11 e 12 do ano 
precedente, mar�o � o m�s 1 e 
dezembro � o m�s 10; 
D � representa o dia do m�s; 
A � representa o n�mero formado pelos dois �ltimos algarismos do ano; 
S � representa o n�mero formado pelos dois primeiros algarismos do ano; 
Os dias da semana s�o numerados de zero a seis; Domingo corresponde a 0, Segunda a 1, 
e assim por diante.
*/
#include <iostream>
using namespace std;
int main ()
{

int M,D,A,S,i,f;


for(i=0;i<50;i=i+1)
{
cout<<"\nDigite o mes";
cout<<"\nJaneiro e Fevereiro sao mes 11 e 12";
cout<<"\nMarco e o mes 1  Dezembro e o mes 10";
cin>>M;
cout<<"\nDigite o dia";
cout<<"\nDomingo e o dia 0 segunda o dia 1 e assim por diante";
cin>>D;
cout<<"\nDigite os dois ultimos algarismos do ano";
cin>>A;
cout<<"\nDigite os dois  primeiros do ano";
cin>>S;

f=(2.6*M-0.02);
cout<<f+A+D+(A/4)+((S/4)-(2*S)/7);

}


}
