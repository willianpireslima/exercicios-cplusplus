/*
Fazer um algoritmo para ler os valores dos coeficientes A, B e C de 
uma equação quadrática. Calcular e imprimir ovalor do discriminante
(delta). ?=B^2-4*A*C.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a,b,c;

cout << "\nDigite a  ";
cin  >> a;
cout << "\nDigite b  ";
cin  >> b;
cout << "\nDigite c  ";
cin  >> c;
cout << "\n Delta Ã©   ";
cout << b*b-4*a*c;
}
