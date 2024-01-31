/*
Escreva um algoritmo que leia três números inteiros positivos (A, B, C) 
e calcule a seguinte e xpressão:
D =R+ S2 , onde R=(A+ B)^2 e S=(B+ C)^2
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int A,B,C;

cout << "\nDigite A  ";
cin  >> A;
cout << "\nDigite B  ";
cin  >> B;
cout << "\nDigite C  ";
cin  >> C;

int R,S;
R=(A+B)*(A+B),S=(B+C)*(B+C);

cout <<"\nD: ";
cout << (R+S)/2;
}
