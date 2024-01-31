/*
Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em uma determinada cidade. Para isso, são fornecidos os seguintes dados:
• Número do consumidor;
• Preço do Kw consumido;
• Quantidade de Kw consumido durante um mês;
• Código do tipo de consumidor ( residencial, industrial, comercial );
O número do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo que:
Leia os dados descritos acima.
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{
	
// nc=numero do consumidor,pkwh=preco do kwh,pkwhm=preco do kwh por mes
//tc=tipo de consumidor,t=total
//sr=somador residencial,sc=somador comercial,si=somador industrial,
//cc=contador de cosumidor
int	nc,pkwh,pkwhm,t,maior,menor,sr,sc,si,cc;
maior=0,menor=0,sr=0,sc=0,si=0,cc=0;
string resp;

cout<<"\nDigite número do consumidor";	
cout<<nc;

while(nc!=0)	
{
		
cout<<"\nDigite número do consumidor";	
cin>>nc;
cout<<"\nDigite preço do kWh consumido";		
cin>>pkwh;
cout<<"\nDigite quantidade de kWh consumidos durante o mês";	
cin>>pkwhm;
t=pkwh*pkwhm;
cout<<"\nO Total a pagar e";
cout<<t;

// medias
if(maior<t)	
{
maior=t;	
}


if(menor>t)	
{
menor=t;	
}

//contador de consumidor
cc=cc+1;

cout<<"\nDigite código do tipo de consumidor ";		
cin>>resp;

   if(resp=="r")
   {
    sr=sr+t;	
   }
       else
       {
           if  (resp=="c")
          {
               sc=sc+t;	
          }
              else
			  {
			     if  (resp=="i")
                {
                      si=si+t;	
                }	
			  	
			  }
	   
	   
	    }	

}		
		

cout<<"no maior consumo verificado";
cout<<maior;
cout<<"no menor consumo verificado";
cout<<menor;
cout<<"no total do consumo para cada um dos três tipos de consumidores";
cout<<"\nO Consumo residencial foi de ";		
cout<<sr;		
cout<<"\nO Consumo comercial foi de ";
cout<<sc;		
cout<<"\nO Consumo industria foi de ";
cout<<si;

cout<<"a média geral de consumo";
cout<<sr+sc+si/cc;
			
	
}
