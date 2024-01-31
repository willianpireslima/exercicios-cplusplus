/*
Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram 
ou não de um novo produto lançado no mercado. Para isso, forneceu o sexo do 
entrevistado e sua resposta ( sim ou não).
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{
 //csm contador de sim masculino,cnm contador de nao masculino
 //csf contador de sim feminino,cnf contador de feminino
 int csm,cnm,csf,cnf,i;
 csm=0,cnm=0,csf=0,cnf=0;
 
 string resp,sexo;
 
 for  (i=0;i<2000;i=i+1)
 {
    
  cout<<"\nDigite sua opiniao   ";
  cin>>resp;
  cout<<"\nDigite seu sexo      ";
  cin>>sexo;
	
	if  (resp=="s" && sexo=="m")
	{
	csm=csm+1;
	}
 	    else
       {
       if  (resp=="n" && sexo=="m")
	   {
  	       cnm=cnm+1;
	   }	
           else
	       {
           if  (resp=="n" && sexo=="m")
	       {
  	           cnm=cnm+1;
	       }
		        else	
				{
				if  (resp=="s" && sexo=="f")
	            {
  	               csf=csf+1;
	            }	
				    else	
					{
					if  (resp=="n" && sexo=="f")
	                 {
  	                    cnf=cnf+1;
	                 }	
					}		
				} 
		   }  
	   }	
   } 
 
 cout<<"\nO Numero de pessoas que disseram sim e   ";
 cout<< csm+csf;
 cout<<"\nO Numero de pessoas que disseram nao e   ";
 cout<< cnm+cnf;
 cout<<"\nA porcentagem de mulheres disseram sim e "; 
 cout<<(csf/100)*csm+cnm+csf+cnf; 
 cout<<"\nA porcentagem de homens  disseram nao e  ";  
 cout<<(cnm/100)*csm+cnm+csf+cnf;
 }    
