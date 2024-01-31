/*
Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um 
certo período. Fazer um algoritmo que:
• Leia inicialmente o número de crianças nascidas no período;
• Leia, em seguida, um número indeterminado de linhas, contendo, cada uma, o sexo de uma
criança morta ( masculino, feminino ) e o número de meses de vida da criança. 
A última linha, que não entrara nos cálculos, contém no lugar do sexo a palavra “VAZIO” ;
Determine e imprima:
• A porcentagem de crianças mortas no período;
• A porcentagem de crianças do sexo masculino mortas no período;
• A porcentagem de crianças que viveram 24 meses ou menos no período;
*/
# include<iostream>
# include<stdlib.h>
# include<math.h>
using namespace std;
int main ()
{
// nc=criancas nascidas,m=numero de meses,
//ccm=contador de crianças mortas masculinas
//ccf=contador de criancas mrtas femninias
//contador de tempo de vida

int nc,m,ccm,ccf,ctv,ctv24;
ccm=0,ccf=0,ctv=0,ctv24=0;

 string sexo;
 
cout<<"\nDigite o numero de criacas nascidas";
cin>>nc;
cout<<"\nDigite o sexo";
cout<<sexo;	

while(sexo!="vazio")	
{
cout<<"\nDigite o sexo";
cout<<sexo;	
   if(sexo=="m")
   {
   ccm=ccm+1;
   }
       else
       {
	   	    if  (sexo=="f")
            {
                ccf=ccf+1;
            }
	   	
	   }

cout<<"\nDigite o tempo de vida em meses";
cin>>m;	
if(m<=24)	
{
ctv24=ctv24+1;
}	
    else
	{
		if(m>24)
        {
		ctv=ctv+1;	
		}
	

	}												
	    
	
}	
	
cout<<"\na porcentagem de crianças mortas no período";
cout<<((ccm+ccf)/100)*nc;
cout<<"\na porcentagem de crianças do sexo masculino mortas no período";
cout<<(ccm/100)*ccm+ccf;
cout<<"\na porcentagem de crianças que viveram 24 meses ou menos no período";	
cout<<(ctv24/100)*ctv;
	
	
}
