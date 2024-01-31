/*
Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino). 
Fazer um algorítimo  que calcule e escreva:
• A maior e a menor altura do grupo;
• A média de altura das mulheres;
• O número de homens;
*/
# include<iostream>
# include<stdlib.h>
using namespace std;
int main ()
{
 //altF=altura feminia,altM=altura masculina,i=contador
 //cm=contador masculino,cf=contador feminino
 // maiorF=Maior feminino,maiorM=maior masculino
 //menorF=menor feminino,menorM=menor masculino;
 //sf=soma feminina,sm=soma masculina
 string sexo;
 float altF,altM;
 int i,cm,cf,maiorF,maiorM,menorF,menorM,sm,sf;
 maiorF=0,maiorM=0,menorF=0,menorM=0,cf=0,cm=0,cf=0,sm=0,sf=0;

 for  (i=0;i<50;i=i+1)
 {
      cout<<"\nDigite seu sexo ";
      cout<<"\n F para feminino e M para masculino";
	  cin >>sexo;
 
     if  (sexo=="F")
     {
         cout<<"\nDigite sua altura   ";
         cin >>altF;
         cf=cf+1;
         sf=sf+altF;
         
         if(altF>maiorF)
         {
         maiorF=altF;
         }
        
            if(altF<menorF)
            {
            menorF=altF;
            }
    
        
     }
         
		 
		 
		 else
         {
             if  (sexo=="M")
             {
			     cout<<"\nDigite sua altura   ";
                 cin >>altM;
                 sm=sm+altM;
                 cm=cm+1;
		     }
             
             if(altM>maiorM)
             {
               maiorM=altM;
             }
            
            
             if(altM<menorM)
             {
			  menorM=altM;  
			 }
         }
  
   }
         
  
 if(maiorM>maiorF)
 {
 cout <<"\nA Maior media e";
 cout <<maiorM;
 }
     else
     {
     cout <<"\nA Maior media e";
     cout <<maiorF;
     }
 
 if (menorM<menorF)
 {
 cout <<"\nA Menor media e";
 cout <<menorM;
 
 }
     else
    {	
	 cout <<"\nA Menor media e";
    cout <<menorF;
	}
	
 
 cout<<"\nA Media das alturas das mulheres e";
 cout<<sf/cf;
 cout<<"\nO Numero de homens e";   
 cout<<cm;
     

}
