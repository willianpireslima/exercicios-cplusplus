/*
Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular 
seu rendimento ela dever� fornecer o valor constante da aplica��o mensal, a taxa 
e o n�mero de meses. Sabe-se que a f�rmula usada para este c�lculo �: valor acumulado =
(1+ i)n-1i*P, onde i = taxa, P = aplica��o mensal e n = n�mero de meses
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
