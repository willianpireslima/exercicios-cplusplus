/*
Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e 
mostre, além do valor da média do aluno, a mensagem “Aprovado”, caso a média 
seja igual ou superior a 6, ou a mensagem “Reprovado”, caso contrário.
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
