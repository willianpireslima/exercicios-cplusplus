/*
Escrever um algoritmo que leia um número de 3 dígitos e o inverta, escrevendo 
o número lido e o invertido 
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a;

cout << "\n Digite um numero de tres algarismos";
cin >> a;

int b,c,d;
b=a/100,c=(a%100)/10,d=a%10;

cout << "\n O Numero lido Ã© ";
cout << a;
cout << "\n O Numero invertido Ã© ";
cout << (d*100)+(c*10)+b;
}
