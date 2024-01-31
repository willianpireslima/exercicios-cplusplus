/*
A conversão de graus Fahrenheit para centígrados e obtido por C = 5 / 9 ( F – 32 ). 
Fazer um algoritmo que calcule e escreva uma tabela de centígrados em função 
de graus Fahrenheit, que variam de 50 a 150 de 1 em 1.
*/

# include<iostream>
# include<stdlib.h>
# include<math.h>
using namespace std;
int main ()
{
 
 int i;
 float f,c;
 c=((f - 32)*5)/9;

 for  (i=50;i<=150;i=i+1)
 {
      cout<<"\nDigite  a temperatura em Farenheit ";
      cin >>f;
      cout<<"\nO Resutado em celsios e";
      cout<<c;
      cout<<"\t";
   }
 
}    