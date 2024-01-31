/*
Fazer um algoritmo que leia um ângulo em graus e imprima o seno, o 
cosseno e a tangente do ângulo lido
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{

int ang;

cout <<"\ndigite um angulo ";
cin >> ang;
cout <<"\nSeu Seno     e   ";
cout << sin (ang);
cout <<"\nSeu cosseno  e   ";
cout << cos (ang);
cout <<"\nSua tangente e   ";
cout << tan (ang);
}
