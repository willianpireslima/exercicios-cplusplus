/*
O sistema de avalia��o da disciplina programa��o de computadores tem quatro 
avalia��es durante o semestre que seguem os seguintes crit�rios: 
� 1a avalia��o tem peso 2;
� 2 a avalia��o tem peso 4;
� 3 a avalia��o tem peso 6;
� 4 a avalia��o tem peso 8.
Fazer um algoritmo que leia as quatro notas de um aluno, calcule e escreva a 
m�dia ponderada final do aluno.
*/

# include <iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{ 

int a,b,c,d;

cout << "\nDigite a nota da primeira avaliacao   :";
cin  >> a;
cout << "\nDigite a nota da segunda avaliacao    :";
cin  >> b;
cout << "\nDigite a nota da terceira avaliacao   :";
cin  >> c;
cout << "\nDigite a nota da quarta avaliacao     :";
cin  >> d;
cout << "Sua media ponderada e de                :";
cout << (a*2+b*4+c*6+d*8)/10;
}
