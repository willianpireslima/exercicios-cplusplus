/*
distribuidora de combustíveis Ave Maria irá aumentar o preço do combustível em função da
quantidade comprada anualmente por seus clientes. Os postos, que consomem em média até 50.000 litros
de combustível por mês, terão aumento de 20%. Os postos, que consomem acima desta média, 12% de
aumento. A distribuidora irá fornecer o nome do posto e seu consumo anual. Faça um algoritmo que leia os
dados fornecidos pela distribuidora, calcule e escreva o nome do posto e qual será o preço do litro de
combustível para o mesmo, considerando-se que hoje a distribuidora cobra R$ 4,95 por litro.

*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
int main ()

{
float L;

float PL;
PL=2.3;
string nome;

cout<<"\nDigite a quantidade de combustivel em litros";
cin >> L;
cout <<"\nDigite o nome do posto";
cin >> nome;
cout << nome;

if (L<50000 && L>45000)
{
cout <<"\n o aumento sera de 20% ";
cout << (L*PL)*1.20;

}
else
{
     if(L>50000)
     {
     cout <<"\n o aumento sera de 12%";
     cout << (L*PL)*1.12;
     }
}



}
