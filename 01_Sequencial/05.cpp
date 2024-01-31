/*
Fazer um algoritmo que, dados os 4 elementos de uma matriz 2x2, 
calcule e escreva o valor do determinante desta matriz
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a11,a12,a21,a22;

cout << "\nDigite a11  ";
cin  >> a11;
cout << "\nDigite a12  ";
cin  >> a12;
cout << "\nDigite a21  ";
cin  >> a21 ;
cout << "\nDigite a22   ";
cin  >> a22 ;
cout <<  "\nA Determinante da matriz é ";
cout << a11*a22-a21*a12;

}

