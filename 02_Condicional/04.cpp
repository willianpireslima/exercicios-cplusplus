/*
Desenvolver um algoritmo para ler um número X e calcular e imprimir o valor de 
Y de acordo com as condições a seguir: Y=X , se X< 1; Y=0, se X=1 e Y=X^2, se X> 1.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
int main ()
{

int x,y;
cout << "\nDigite  x";
cin >> x;
cout << "\nDigite  y";
cin >> y;

if(x<1)
{y=x;
cout<<y;

  if(x==1)
   {(y==0);
   cout << y;
   }

} 
  
  else
   {
    (y==2*x);
    cout<<y;
   }
}
