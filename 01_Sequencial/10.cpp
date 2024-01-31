/*
Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l)
, dado que são conhecidos a distância total percorrida e o volume de combustível 
consumido para percorrê-la (medido em litros). Observação: a principal questão 
a ser levantada na elaboração do algoritmo pedido consiste na formulação da 
expressão usada para calcular o consumo médio (CM), a partir da distância total 
percorrida(distância) e do volume de combustível consumido (Volume), que é 
dada por: Consumo Médio =Distância/Volume .
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()
{
int D,V;

cout << "\nDigite o volume de combustivel em litros    ";
cin >> V;
cout << "\nDigite distancia percorrida em quilometros  ";
cin >> D;
cout << "\nO Consumo medio Ã©  ";
cout << D/V << "Km/l";
}
