/*
Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular 
seu rendimento ela deverá fornecer o valor constante da aplicação mensal, a taxa 
e o número de meses. Sabe-se que a fórmula usada para este cálculo é: valor acumulado =
(1+ i)n-1i*P, onde i = taxa, P = aplicação mensal e n = número de meses
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int I,P,N;

cout << "\nDigite a sua taxa              :";
cin >> I;
cout << "\nDigite a sua aplicacao mensal  :";
cin >> P;
cout << "\nDigite o numero de meses       :";
cin >> N;
cout << "\nO Seu valor acumulado e de     :";
cout<< ((pow((1+I),N)-1)/I)*P;
}
