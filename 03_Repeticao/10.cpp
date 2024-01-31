/*
foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa 
cidade, num determinado dia. Para cada casa visitada, foram fornecidos os 
números dos // canais (4,5, 7, 9, 12) e o número de pessoas que o estavam assistindo 
naquele exato momento.É importante saber que se a televisão estivesse desligada, 
nada era anotado, ou seja, esta casa não entrava na  pesquisa
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{

// c= contadores dos canais	
int canal, c4,c5,c7,c12;
c4=0,c5=0,c7=0,c12=0;
string nome,resp;	

cout<<"\nDigite o seu canal";	
cin>>canal;

 while(canal!=0)	
 {
  
  cout<<"\nA Sua televisao estava ligada";	
  cin>>resp;
  
  if  (resp=="s")
  {
       cout<<"\nDigite o seu canal";	
       cin>>canal;
      
       	if(canal=4)
	    {
        c4=c4+1;
		}
            else
			{
			    if  (canal=5)
	            {
                    c5=c5+1;
                }	 
			        else
					{
					    if  (canal=7)
	                    {
                            c7=c7+1;
                        }	
					        else
						    {
         	                    if  (canal=12)
	                            {
                                    c12=c12+1;
                                }		
						
						     }	
					
					}	 				 
			}
  
   }
  
 
  }	

     else
	 {
	  if(resp=="n")
	 cout<<"\n A opcao de canao nao sera mostrada";	
	 	
	 }

cout<<"\n A porcentagem de audiencia do canal 4 e";	 
cout<<(c4/100)*(c4+c5+c7+c12)<<%;
cout<<"\n A porcentagem de audiencia do canal 5 e";	 
cout<<(c5/100)*(c4+c5+c7+c12)<<%;	 
cout<<"\n A porcentagem de audiencia do canal 7 e"";	 
cout<<(c7/100)*(c4+c5+c7+c12)<<%;
cout<<"\n A porcentagem de audiencia do canal 12 e";	 
cout<<(c12/100)*(c4+c5+c7+c12)<<%; 
	 
	 	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
}
