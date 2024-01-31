/*
Desenvolver um algoritmo para receber uma data e consisti-la. Consistir uma 
data significa verificar se a mesma é válida
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
int main ()

{

int D,M,A;

cout <<"\nDigite o dia";
cin >> D;

cout <<"\nDigite o dia";
cin >> D;
cout <<"\nDigite o mes";
cin >> M;
cout <<"\nDigite o ano";
cin >> A;

if ((D>=1 && D<=31) && (M>=1 && M<=12) && (A>=1 && A<=100))
{
cout <<"\nA data e valida";

}
else
   {
    cout <<"\nA data e invalida";
   }

}
