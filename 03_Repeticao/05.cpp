/*
Supondo que a popula��o de um pa�s A seja de ordem de 90.000.000 de habitantes 
com uma taxa anual de crescimento de 3% e que a popula��o de um pa�s B seja, 
aproximadamente, de 200.000.000 de habitantes com uma taxa anual de crescimento 
de 1,5%, fazer um algoritmo que calcule e escreva o n�mero de anos necess�rios 
para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B, 
mantidas essas taxas de crescimento.
*/
# include <iostream>
using namespace std;

int main ()
{

 int a,b,t;
a=90000000,b=20000000,t=0;
while(a<=b)
{

a=a+a*0.03;
b=b+b*0.015;
t=t+1;
}

cout<<"\nA Quantidade em anos e";
cout<<t;
}
