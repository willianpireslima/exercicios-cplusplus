/*
No Teorema de Pit�goras, onde o quadrado da hipotenusa � igual � soma dos 
quadrados dos catetos(H2=L12+ L22), para se criar tri�ngulos ret�ngulos com os 
tr�s lados inteiros, s�o utilizadas as seguintesf�rmulas: L1=|M2-N2|, L2=2*M*N 
e H=M2+ N2, onde M e N s�o dois valores inteiros positivos.Desenvolver 
um algoritmo que leia dois n�meros inteiros positivos, calcule e escreva 
o tamanho doscatetos e da hipotenusa do tri�ngulo ret�ngulo gerado
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{

int M,N;

cout << "\nDigite o maior numero  ";
cin >> M;
cout << "\nDigite o menor numero  ";
cin >> N;
cout << "\nL1 é  " << M*M-N*N;
cout << "\nL2 é  " << 2*M*N;
cout << "\n A Hipotenusa é  " << M*M+N*2;
}
