/*
Fazer um algoritmo que, dado tr�s valores A, B e C, verifique se eles formam um tri�ngulo
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
#include<string> 
using namespace std;
int main()
{
int a,b,c;
cout <<"\nDigite um lado  ";
cin >> a;
cout <<"\nDigite outro lado  ";
cin >> b;
cout <<"\nDigite o ultimo lado  ";
cin >> c;

if(a<(b+c) && b<(a+c) && c<(a+b))
 {
 cout << "esses lados um triangulo";
 }
 else
{
cout << "esses lados nao formam um triangulo";

}


}
