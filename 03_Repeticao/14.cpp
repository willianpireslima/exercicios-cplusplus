/*
Tem-se uma estrada ligando v�rias cidades. Cada cidade tem seu marco quilom�trico. 
Fazer um algoritmo que:
� Leia v�rios pares de dados, contendo cada par de dados os valores dos marcos 
quilom�trico, em ordem crescente, de duas cidades. O �ltimo par cont�m estes dois valores iguais;
� Calcule os tempos decorridos para percorrer a dist�ncia entre estas duas cidades, 
com as seguintes velocidades: 20, 30, 40, 50, 60, 70 e 80 Km/h, sabendo-se que:
T = E / V, onde :
� T = tempo
� E = especo
� V = velocidade
Escreva os marcos quilom�tricos, a velocidade e o tempo decorrido entre as duas 
cidades, apenas quando este tempo dor superior a 2 horas:
*/
#include <iostream>
using namespace std;
int main()
{
int a,b,i;

 cout<<"\nDigite o marco da primeira cidade   ";
 cin>>a;
 cout<<"\nDigite o marco da segunda cidade   ";
 cin>>b;

  while(a!=b)
  {
  cout<<"\nDigite o marco da primeira cidade   ";
  cin>>a;
  cout<<"\nDigite o marco da segunda cidade   ";
  cin>>b;

      for  (i=20;i<=80;i=i+10)
      {      
      	  if   ((b-a)/i>2)
          {   
				cout<<"\n na velocidade de "<<i<<"e  ";
				cout<<(b-a)/i;   
          }
      }
   }
   

}
