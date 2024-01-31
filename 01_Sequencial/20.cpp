/*
crie um algortimo para monstrar o comprimento,area e volume de esfera
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()
{

int r;
cout <<"\nDigite raio  ";
cin >> r;
float pi;
pi=3.14;

cout <<"\nO Comprimento da esfera e de ";
cout << 2*pi*r;
cout <<"\nO A Area dessa esfera e de   ";
cout << pi*pow(r,2);
cout <<"\nO O Volume dessa esfera e de  ";
cout << (3/4)*pi*pow(r,3);
}
