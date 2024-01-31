/*
Fa�a um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e mostre-a expressa apenas em dias
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int d;

cout << "\ndigite sua idade impressa em dias";
cin >> d;

int a;
a=d/365;

cout <<"\n Sua idade em anos é  ";
cout << a;

int m;
m=a*12;

cout <<"\n Sua idade em meses é ";
cout << m;

cout <<"\n Sua idade em dias é  ";
cout << d;
}
