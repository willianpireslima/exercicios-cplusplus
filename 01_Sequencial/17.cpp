/*
O sistema de avaliação da disciplina programação de computadores tem quatro 
avaliações durante o semestre que seguem os seguintes critérios: 
• 1a avaliação tem peso 2;
• 2 a avaliação tem peso 4;
• 3 a avaliação tem peso 6;
• 4 a avaliação tem peso 8.
Fazer um algoritmo que leia as quatro notas de um aluno, calcule e escreva a 
média ponderada final do aluno.
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
