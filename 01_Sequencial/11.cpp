/*
 Escrever um algoritmo que leia o valor de uma compra em dólares, a taxa do 
dólar no dia da compra, o percentual de ICMS e o percentual de lucro da empresa;
e que calcule e escreva o valor a ser pago em reais, sabendo-se que o percentual 
de lucro e o percentual de ICMS incidem sobre o valor em reais. 
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{ 
int VD;

cout << "\nDigite o valor da compra em dolares  ";
cin >> VD;

int TD,ICMS,PLE;
TD=(TD/100)*VD,ICMS=(ICMS/100)*VD,PLE=(PLE/100)*VD;

cout << "\nDigite a taxa do dolar       ";
cin >> TD;
cout << "\nDigite O percentual do ICMS  ";
cin >> ICMS;
cout << "\nDigite O percentual do lucro da empresa  ";
cin >> PLE;

cout << "\nO Valor total da compra Ã©  ";
cout << VD+TD+ICMS+PLE;
}
