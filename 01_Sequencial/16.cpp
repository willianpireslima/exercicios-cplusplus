/*
Ler dois números inteiros quaisquer para as variáveis A e B. Efetuar a troca 
dos valores de forma que A passe a armazenar o valor de B e que B passe 
armazenar o valor de A. Imprimir os valores trocados
*/

# include <iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{

int a,b;

cout << "\nDigite a   ";
cin >> a;
cout << "\nDigite b   ";
cin >> b;

int c;
c=a,a=b,b=c;

cout << "\nMostre a   ";
cout << a;
cout << "\nMostre b   ";
cout << b;
}
