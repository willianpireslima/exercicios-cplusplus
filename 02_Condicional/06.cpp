/*
Fazer um algoritmo que, dado tr�s valores A, B e C, verifique se eles formam 
um tri�ngulo. Formandoum tri�ngulo, dizer se ele � equil�tero, is�sceles ou escaleno. 
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
#include<string> 
using namespace std;
int main()
{
int a,b,c;
cout <<"\nDigite um lado  ";
cin >> a;
cout <<"\nDigite outro lado  ";
cin >> b;
cout <<"\nDigite o ultimo lado  ";
cin >> c;

if   (a<(b+c) && b<(a+c) && c<(a+b))
{
cout << "os numeros formaram um triangulo";

	if  (a==b && a==c)
      cout << "formam triangulo equilatero";
      	  else
       	   if  (a==b || a==c || b==c)
                 cout << "formam triangulo isosceles";
      	  	  	  	  else
    					cout << "formam triangulo escaleno"; 
}

}
