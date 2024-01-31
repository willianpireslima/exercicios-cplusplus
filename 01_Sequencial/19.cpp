/*

*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int TP,QP,VL;

cout << "/nDigite o total de prestacoes           :";
cin >> TP;
cout << "/nDigite a quantidade de prestcoes pagas :";
cin >> QP;
cout << "/nDigite o valor atual da prestacao      :";
cin >> VL;
cout << "/nO Total pago e de                      :";
cout << QP*VL;
cout << "/nO saldo devedor e de                   :";
cout << (TP-QP)*TP;
}
