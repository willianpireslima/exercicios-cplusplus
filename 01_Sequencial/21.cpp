#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()
{
int vp,i,t;

cout <<"\nDigite o valor da prestaçao ";
cin >> vp;
cout <<"\nDigite o a taxa de juros    ";
cin >> i;
cout <<"\nDigite o tempo de atraso    ";
cin >> t;
cout <<"\nO Valor atualizado da prestaçao e de ";
cout << vp+(vp*(i/100)*t);
}
