/*
Desenvolver um algoritmo para ler os comprimentos dos três lados de um triângulo 
(L1, L2 e L3) e calcular a área do triângulo de acordo com a fórmula: 
Área=vT*(T-L1)*(T-L2)*(T-L3), onde T=L1+ L2+ L32
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{

int L1,L2,L3;

cout << "\nDigite L1  ";
cin  >> L1;
cout << "\nDigite L2  ";
cin  >> L2;
cout << "\nDigite L3  ";
cin  >> L3;
cout << "\n O comprimento dos tres lados e Ã©   ";

int T;
T=(L1+L2+L3)/2;

cout << T;
cout << "\na Area do triangulo e";
cout << sqrt (T*(T-L1)*(T-L2)*(T-L3));

}

