/*
Escrever um algoritmo que leia um n�mero de 3 d�gitos e o inverta, escrevendo 
o n�mero lido e o invertido 
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

cout << "\n O Numero lido é ";
cout << a;
cout << "\n O Numero invertido é ";
cout << (d*100)+(c*10)+b;
}
