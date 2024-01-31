/*
Fazer um algoritmo que calcule e imprima o salário reajustado de um funcionário 
de acordo com as seguintes regras:
• salário de até R$ 1500,00, reajuste de 50%;
• salários maiores que R$ 1500,00, reajuste de 30%
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a;
cout << "\nDigite o seu salario  ";
cin >> a;
if(a<350)
{
cout << "\n Seu salario reajustado foi e  ";
cout << (a*0.50)+a;

}
    else
    {
      if(a>350)
	   {
	    cout <<"\n Seu salario reajustado e    ";
        cout << (a*0.30)+a;
	   }

     }

}
