/*
Uma determinada f�brica de r�dios possui duas linhas de montagem distintas: 
standard e luxo. A linha de montagem standard comporta um m�ximo de 24 oper�rios. 
Cada r�dio standard da um lucro de X reais e gasta um homem dia para sua confec��o. 
A linha de montagem luxo comporta no m�ximo 32 oper�rios, cada r�dio luxo da um 
lucro de Y reais e gasta 2 homens dia para para sua confec��o.

A f�brica possui 40 oper�rios. O mercado � capaz de absorver toda a produ��o e 
o fabricante deseja saber qual esquema de produ��o a adotar de modo a maximizar 
seu lucro di�rio. Fazer um algoritmo que leia os valores de X e Y e escreva, 
para esse esquema de lucro m�ximo, o n�mero de oper�rios na linha standard e 
na linha luxo, o n�mero de r�dios standard e luxo produzidos, e o lucro.
*/
# include <iostream>
using namespace std;
int main ()

{
int ops,x,ras,opx,y,rax;


cout<<"\nDigite os numero da produçao de standard";
cout<<"\nDigite a quantidade de  operarios";
cin>>ops;

while(ops!=0)

cout<<"\nDigite os numero da produçao de standard";
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
     cout<<"\nNumero excede o tipo da produçao";     
    }
cout<<"\nO Lucro e ";
cout<<ops*x*ras;


cout<<"\nDigite os numero da produçao de luxo";
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
     cout<<"\nNumero excede o tipo da produçao";     
    }

cout<<"\nO Lucro e ";
cout<<opx*y*rax;




}
