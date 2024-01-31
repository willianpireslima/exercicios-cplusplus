/*
A cidade de Perdiz das Cruzes possui um único posto telefônico. Por este posto são feitas todas as
ligações interurbanos da cidade. O valor a ser pago é calculado de acordo com as seguintes regras:
• Taxa de R$ 2,00 pela ligação mais R$ 1,00 para os 3 primeiros minutos;
• Acima dos três primeiros minutos, a taxa é de R$ 2,15, para cada intervalo de 5 minutos, e
R$ 0,85, para cada minuto abaixo disto.
A telefonista irá fornecer o nome do usuário e o tempo da ligação em minutos. O algoritmo deverá
calcular o valor a ser pago e escrever o nome do usuário e o valor da conta
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
cout << "\nDigite o tempo de ligaÃ§ao"
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
