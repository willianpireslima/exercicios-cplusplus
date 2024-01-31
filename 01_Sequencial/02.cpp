/*
No Teorema de Pitágoras, onde o quadrado da hipotenusa é igual à soma dos 
quadrados dos catetos(H2=L12+ L22), para se criar triângulos retângulos com os 
três lados inteiros, são utilizadas as seguintesfórmulas: L1=|M2-N2|, L2=2*M*N 
e H=M2+ N2, onde M e N são dois valores inteiros positivos.Desenvolver 
um algoritmo que leia dois números inteiros positivos, calcule e escreva 
o tamanho doscatetos e da hipotenusa do triângulo retângulo gerado
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
cout << "\nL1 Ã©  " << M*M-N*N;
cout << "\nL2 Ã©  " << 2*M*N;
cout << "\n A Hipotenusa Ã©  " << M*M+N*2;
}
