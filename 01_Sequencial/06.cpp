/*
Fazer um algoritmo que obtenha o raio e a altura de um cilindro e que 
calcule e escreva o seu volume e sua área.Área=2*p*raio*(altura+ raio)
e Volume=p*raio2*altura.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int al,R;
float PI;
PI=3.14;

cout <<"\nDigite a altura  ";
cin >> al;
cout << "\nDigite o raio  ";
cin >> R;
cout <<"\n A area do cilindro Ã©      ";
cout << 2*PI*(al+R);
cout <<"\n O Volume do cilindro   Ã©  ";
cout << PI*(R*2)*al;
}
