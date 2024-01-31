/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele 
comercializa. Para isto, mandou digitar uma linha para cada mercadoria com o 
nome, preço de compra e preço de venda das mesmas. Fazer um algoritmo que:
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{
 
 //pc=PrecoDeCompra,pv=preco de venda,qt=quantidade de lucro,Sqt=somador de lucro
//Spc somador de compra,Spv=Somador de venda
 //qtP=quantidade de lucro em porcentagem
 string nome;
 float pc,pv,qt,qtP,Spc,Spv,Sqt;
 Spc=0,Spv=0;
 
 //contadores para os diferentes tipos de lucro
 int i1,i2,i3;
 i1=0,i2=0,i3=0;

 
  cout<<"\nDigite o nome do produto ";
  cin >>nome;
  
 
  while (nome!="0")
 
 {
       cout<<"\nDigite o nome do produto ";
       cin >>nome;
       cout<<"\n O Preco da compra";
       cin>>pc;
       cout<<"\n 0 Preco da venda";
       cin>>pv;
       
	   qt=pc-pv;
       qtP=qt/100*pc;
	   Sqt=Sqt+qt;
	   Spc=Spc+pc;
	   Spv=Spv+pv;
	   if(qtP<pc*0.10)
       {
	   	i1=i1+1;
	   }
           else
           {
		   	if (qtP<pc*0.10 && qtP<=pc*0.20)
		   	{
			  i2=i2+1;  	
		    }

		   
               else
			   {
               if (qtP>pc*0.20)
		   	   {
                  i3=i3+1;  	
		       }  
			   
			   
			   }
 
		   }
 
 }
cout<<"\n As quantidades de produtos sao";
cout<<"\nmenos 10%";
cout<<i1;
cout<<"\nmaior ou igual 10% e menor ou igual 20";
cout<<i2;
cout<<"\n quesao maiores 20% e";
cout<<i3;  
cout<<"\no total de lucro e";
cout<<Sqt; 
cout<<"\no total do preço de compra e";
cout<<Spc; 
cout<<"\no total do preço de venda e";
cout<<Spv; 


}
    
