/*
Escrever um algoritmo que leia a massa (tonelada) de um avião, sua aceleração 
(m/s^2) e o tempo (s)que levou do repouso até a decolagem. Calcule e escreva a 
velocidade atingida (km/h), o comprimento da pista (m) e o trabalho mecânico
realizado (j) no momento da decolagem. W =(m*v^2)/2
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
float m,a,t;

cout << "/n Digite a quantidade de massa do aviao(ton)";
cin >> m;
cout << "/n Digite a aceleracao do aviao (m/s)";
cin >> a;
cout << "/n Digite o tempo do percurso (s)";
cin >> t;
cout << "/n A velocidade atinginda foi de ";
float v=a*3.6;
cout << v;
cout << "/n O trabalho mecanico realizado foi de de ";
cout << (m*v*v)/2;

}
