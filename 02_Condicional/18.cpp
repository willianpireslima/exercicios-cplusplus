/*
Um posto de combust�vel vende tr�s tipos de combust�veis: �lcool, diesel e 
gasolina. O pre�o por litrode combust�vel � apresentado na tabela a seguir. 
Fa�a um algoritmo que leia um caractere que representa o tipo de combust�vel 
comprado (a, d ou g) e a quantidade em litros. O programa deve imprimir o valor em
reais a ser pago pelo combust�vel.

Combust�vel Pre�o por Litro
A - �lcool R$ 1,799
D - Diesel R$ 1,899
G - Gasolina R$ 2,799

*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
#include<string> 
using namespace std;

int main ()
{
cout << "\nDigite A para Alcool";
cout << "\nDigite D para Disel";
cout << "\nDigite G para Gasolina";
string comb;
cout << "\nDigite o seu combustivel";
cin >> comb;


if(comb=="A")
{
cout << "\nO Preco do Alcool e de R$ 1,805";

}
 else
 {
   if(comb=="D")
   {
   cout << "\nO Preco do Disel e de R$ 1,053";
   }
     else
     {
        if(comb=="G")
         {
          cout << "\nO Preco da Gasolina e de R$ 2,565";
         }     
     }
 }

}





