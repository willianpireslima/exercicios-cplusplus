/*
Escrever um algoritmo que leia um valor em reais e calcule qual o menor número 
possível de notas de 100, 50, 20, 10, 5, 2 e 1 em que o valor lido pode ser 
decomposto. Escrever o valor lido e a relação de notas necessárias.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a;

cout << "\nDigite um numero  ";
cin >> a;

int b,c,d,e,f;
b=a/100,c=a/50,d=a/10,e=a/5,f=1;

cout << "\nO Menor numero com notas de 100 : ";
cout  << b;
cout << "\nO Menor numero com notas de 50  :";
cout  << c;
cout << "\nO Menor numero com notas de 10  :";
cout  << d;
cout << "\nO Menor numero com notas de 5   :";
cout  << e;
cout << "\nO Menor numero com notas de 1   :";
cout  << f;
}
