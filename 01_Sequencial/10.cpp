/*
Escreva um algoritmo para calcular o consumo m�dio de um autom�vel (medido em km/l)
, dado que s�o conhecidos a dist�ncia total percorrida e o volume de combust�vel 
consumido para percorr�-la (medido em litros). Observa��o: a principal quest�o 
a ser levantada na elabora��o do algoritmo pedido consiste na formula��o da 
express�o usada para calcular o consumo m�dio (CM), a partir da dist�ncia total 
percorrida(dist�ncia) e do volume de combust�vel consumido (Volume), que � 
dada por: Consumo M�dio =Dist�ncia/Volume .
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
cout << "\nO Consumo medio é  ";
cout << D/V << "Km/l";
}
