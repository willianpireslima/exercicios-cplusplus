/*
Fazer um algoritmo que calcule a m�dia aritm�tica das tr�s notas de um aluno e 
mostre, al�m do valor da m�dia do aluno, a mensagem �Aprovado�, caso a m�dia 
seja igual ou superior a 6, ou a mensagem �Reprovado�, caso contr�rio.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()
{

int A,B,C;
cout << "\nDigite sua maior nota  ";
cin >> 	A;
cout << "\nDigite sua  nota       ";
cin >> 	B;
cout << "\nDigite sua outra nota  ";
cin >> 	C;

int D;
D=(A*4+B*3+C*3)/10;

if(D>=5)
{cout << "APROVADO";
cout << "\nSua nota e ";
cout << D;}
else
{cout << "REPROVADO";
cout << "\nSua nota e ";
cout << D;}



}
