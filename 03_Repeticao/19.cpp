/*
Numa certa loja de eletrodom�sticos, o comerci�rio encarregado da se��o de 
televisores recebe, mensalmente, um sal�rio fixo mais comiss�o. Essa comiss�o 
� calculada em rela��o ao tipo e ao n�mero de televisores vendidos por m�s, 
obedecendo � tabela 
abaixo: 
TIPO N.� DE TELEVISORES VENDIDOS COMISS�ES 
a cores maior ou igual a 10 
menor do que 10 
R$ 100,00 por televisor vendido 
R$ 50,00 por televisor vendido 
preto e branco maior ou igual a 20 
menor do que 20 
R$ 40,00 por televisor vendido 
R$ 20,00 por televisor vendido 
*/
#include <iostream>
using namespace std;
int main ()
{

//sal=salario,salli=salario liquido
float sal,INPS,salli,;

//tvc=televisao em cores,tvpb=tv em preto e branco,c=comissao
// ni=numero de incricao
int tvc,tvpb,c,i,ni;
c=0,tvc=0,tvpb=0;

 for(i=0;i<20;i=i+1)
 {

 cout<<"\nDigite o valor do salario fixo";
 cin>>sal;
 cout<<"\nDigite o numero de sua inscricao";
 cin>>ni;
 cout<<"\nDigite o numero de televisores a cores";
 cin>>tvc;

   if  (tvc>=10)
   {
       c=c+(100*tvc);
   }
       else
       {
           if  (tvc<10)
           {
               c=c+(50*tvc);
           }
      
       }


 cout<<"\nDigite o numero de televisores preto";
 cin>>tvpb;
 
  if  (tvpb>=20)
   {
       c=c+(100*tvpb);
   }
       else
       {
           if  (tvpb<20)
           {
               c=c+(50*tvpb);
           }
      
       }


 cout<<"\nO Salario fixo com desconto do INPS e";
 INPS=sal*0.08;
 cout<<INPS;

      if  (sal+c-INPS>3000)
      {
      salli=sal+c-INPS-(sal+c-INPS*0.05);
      cout<<"\n o salario liquido e";
      cout<<salli;
      }
 }


}



