/*
A cidade de Perdiz das Cruzes possui um �nico posto telef�nico. Por este posto s�o feitas todas as
liga��es interurbanos da cidade. O valor a ser pago � calculado de acordo com as seguintes regras:
� Taxa de R$ 2,00 pela liga��o mais R$ 1,00 para os 3 primeiros minutos;
� Acima dos tr�s primeiros minutos, a taxa � de R$ 2,15, para cada intervalo de 5 minutos, e
R$ 0,85, para cada minuto abaixo disto.
A telefonista ir� fornecer o nome do usu�rio e o tempo da liga��o em minutos. O algoritmo dever�
calcular o valor a ser pago e escrever o nome do usu�rio e o valor da conta
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
{
string nome;
int t;


cout << "\nDigite o seu nome"
cin >>  nome;
cout << "\nDigite o tempo de ligaçao"
cin >>  t;

if (t==3)

{
cout "\nO Valor da conta e de"
cout<< 2+1;
}
else
{
         if(t%5==0)
        {
        cout "\nO Valor da conta e de"
		cout<< 2;   
        }
}

}
