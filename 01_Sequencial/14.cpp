/*
Uma auto locadora aluga seus carros com uma taxa fixa por dia, uma taxa por km 
rodado e desconto de10% na taxa fixa de aluguel por dia. Escrever um algoritmo 
que leia a taxa fixa por dia, a taxa por km rodado, o número de dias e o número 
de quilômetros rodados. Deve também calcular e escrever o valor total do aluguel
, o valor do desconto, o número de dias e a quilometragem rodada.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int TFD,D,TKM,NKM;

cout << "\n Digite a taxa fixa por dia             :";
cin >> TFD;
cout << "\n Digite O numero de dias                :";
cin>> D;
cout << "\n Digite a taxa por quilometros rodados  :";
cin >> TKM;
cout << "\nDigite o numero de quilometros rodados  :";
cin >> NKM;
cout <<"\n o total do aluguel e de                 :";
cout << (TFD*D)+(TKM*NKM);
cout << "\nO Valor do desconto e                   :";
cout << TFD*0.10;
cout << "\n A quantidade de dias foi de            :";
cout << (TFD*D)/TFD;
cout << "\n A quilometragem foi de                 :";
cout<< (TKM*NKM)/TKM;
}
