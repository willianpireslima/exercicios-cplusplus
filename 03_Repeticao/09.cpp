/*
Foi feita uma pesquisa para determinar o �ndice de mortalidade infantil em um 
certo per�odo. Fazer um algoritmo que:
� Leia inicialmente o n�mero de crian�as nascidas no per�odo;
� Leia, em seguida, um n�mero indeterminado de linhas, contendo, cada uma, o sexo de uma
crian�a morta ( masculino, feminino ) e o n�mero de meses de vida da crian�a. 
A �ltima linha, que n�o entrara nos c�lculos, cont�m no lugar do sexo a palavra �VAZIO� ;
Determine e imprima:
� A porcentagem de crian�as mortas no per�odo;
� A porcentagem de crian�as do sexo masculino mortas no per�odo;
� A porcentagem de crian�as que viveram 24 meses ou menos no per�odo;
*/
# include<iostream>
# include<stdlib.h>
# include<math.h>
using namespace std;
int main ()
{
// nc=criancas nascidas,m=numero de meses,
//ccm=contador de crian�as mortas masculinas
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
	
cout<<"\na porcentagem de crian�as mortas no per�odo";
cout<<((ccm+ccf)/100)*nc;
cout<<"\na porcentagem de crian�as do sexo masculino mortas no per�odo";
cout<<(ccm/100)*ccm+ccf;
cout<<"\na porcentagem de crian�as que viveram 24 meses ou menos no per�odo";	
cout<<(ctv24/100)*ctv;
	
	
}
