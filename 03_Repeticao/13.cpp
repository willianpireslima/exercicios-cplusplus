/*
Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia el�trica em uma determinada cidade. Para isso, s�o fornecidos os seguintes dados:
� N�mero do consumidor;
� Pre�o do Kw consumido;
� Quantidade de Kw consumido durante um m�s;
� C�digo do tipo de consumidor ( residencial, industrial, comercial );
O n�mero do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo que:
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

cout<<"\nDigite n�mero do consumidor";	
cout<<nc;

while(nc!=0)	
{
		
cout<<"\nDigite n�mero do consumidor";	
cin>>nc;
cout<<"\nDigite pre�o do kWh consumido";		
cin>>pkwh;
cout<<"\nDigite quantidade de kWh consumidos durante o m�s";	
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

cout<<"\nDigite c�digo do tipo de consumidor ";		
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
cout<<"no total do consumo para cada um dos tr�s tipos de consumidores";
cout<<"\nO Consumo residencial foi de ";		
cout<<sr;		
cout<<"\nO Consumo comercial foi de ";
cout<<sc;		
cout<<"\nO Consumo industria foi de ";
cout<<si;

cout<<"a m�dia geral de consumo";
cout<<sr+sc+si/cc;
			
	
}
