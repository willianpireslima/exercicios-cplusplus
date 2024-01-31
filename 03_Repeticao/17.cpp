/*
Uma companhia de teatro planeja dar uma série de espetáculos. A direção calcula 
que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e as despesas montarão 
em R$ 200,00. A uma diminuição de R$ 0,50 no preço dos ingressos espera-se que 
haja um aumento de 26 ingressos vendidos. Fazer um algoritmo que escreva uma
 tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se 
 variar este preço de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. Escreva, ainda o 
 lucro máximo esperado, o preço e o número de ingressos correspondentes
*/
#include <iostream>
using namespace std;
int main()
{


float reais,ingressos,reaisMeio,ingressosMeio;

cout<<"\nDigite a quantia em dinheiro                       ";
cin>>reais;
cout<<"\nDigite a quantia dos ingressos que seram vendidos  ";
cin>>ingressos;


while(reais>1)
{


reais=reais-1;
ingressos=ingressos+52;

cout<<"\n Preco em reais       ";
cout<<reais;
cout<<"\n Quantia de ingressos  ";
cout<<ingressos;
cout<<"\t";

}


cout<<"\nDigite a quantia em dinheiro                       ";
cin>>reaisMeio;
cout<<"\nDigite a quantia dos ingressos que seram vendidos  ";
cin>>ingressosMeio;


while(reaisMeio>0.50)
{

cout<<"\n";

reaisMeio=reaisMeio-0.50;
ingressosMeio=ingressosMeio+26;

cout<<"\n Preco em reais       ";
cout<<reaisMeio;
cout<<"\n Quantia de ingressos  ";
cout<<ingressosMeio;
cout<<"\t";

}



}
