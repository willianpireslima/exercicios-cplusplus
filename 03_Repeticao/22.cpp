/*
Uma determinada fábrica de rádios possui duas linhas de montagem distintas: 
standard e luxo. A linha de montagem standard comporta um máximo de 24 operários. 
Cada rádio standard da um lucro de X reais e gasta um homem dia para sua confecção. 
A linha de montagem luxo comporta no máximo 32 operários, cada rádio luxo da um 
lucro de Y reais e gasta 2 homens dia para para sua confecção.

A fábrica possui 40 operários. O mercado é capaz de absorver toda a produção e 
o fabricante deseja saber qual esquema de produção a adotar de modo a maximizar 
seu lucro diário. Fazer um algoritmo que leia os valores de X e Y e escreva, 
para esse esquema de lucro máximo, o número de operários na linha standard e 
na linha luxo, o número de rádios standard e luxo produzidos, e o lucro.
*/
# include <iostream>
using namespace std;
int main ()

{
int ops,x,ras,opx,y,rax;


cout<<"\nDigite os numero da produÃ§ao de standard";
cout<<"\nDigite a quantidade de  operarios";
cin>>ops;

while(ops!=0)

cout<<"\nDigite os numero da produÃ§ao de standard";
cout<<"\nDigite a quantidade de  operarios";
cin>>ops;
if(ops>24)
{
cout<<"\nDigite o lucro";
cin>>x;
cout<<"\nDigite a quantidade de radios";
cin>>ras;
}
    else
    {
     cout<<"\nNumero excede o tipo da produÃ§ao";     
    }
cout<<"\nO Lucro e ";
cout<<ops*x*ras;


cout<<"\nDigite os numero da produÃ§ao de luxo";
cout<<"\nDigite a quantidade de  operarios";
cin>>opx;
if(opx>32)
{
cout<<"\nDigite o lucro";
cin>>y;
cout<<"\nDigite a quantidade de radios";
cin>>rax;
}
    else
    {
     cout<<"\nNumero excede o tipo da produÃ§ao";     
    }

cout<<"\nO Lucro e ";
cout<<opx*y*rax;




}
