//Conte quantas vogais e quantas consoantes existem na frase e imprima uma mensagem
//informando estas quantidades.
//• Inverta os caracteres da frase de tal forma que o primeiro caractere seja o último e este (ultimo)
//seja o primeiro, o segundo seja o penúltimo e este seja o segundo, ... .
//• Conte quantas vezes um certo caractere informado pelo usuário ( digito extra ) aparece na frase.
//• Retire da frase todas as ocorrências do caractere informado pelo usuário.
//Obs.: Cada uma destas funcionalidades do programa deve ser implementada como uma função.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;

void ContarVogaiseConsoantes (char frase[50]);
void InverterCaracteres      (char frase[50]);
int ContarDigitoExtra       ();
void RetirarDafrase         ();


int main ()
	{
    char frase[50];
    
    cout<<"\nDigite uma frase          ";
	gets(frase);
    
    ContarVogaiseConsoantes (frase);
    
	InverterCaracteres (frase);
       
    
    }

void ContarVogaiseConsoantes (char frase[50])
	{		
	int QuantidadeDeVogais,QuantidadeDeConsoantes;
	
	QuantidadeDeVogais=0;
	QuantidadeDeConsoantes=0;
	
	
	
	
	for (int i=0;frase[i]!='\0';i++) 
		{
							
			if(frase[i]=='A' || frase[i]=='E' || frase[i]=='I' ||
			   frase[i]=='O' || frase[i]=='U' || frase[i]=='a' ||  	
			   frase[i]=='e' || frase[i]=='i' || frase[i]=='o' ||	
	           frase[i]=='u')
			    {
			    QuantidadeDeVogais++;	
                }		
		}	

	for (int i=0;frase[i]!='\0';i++) 
		{
		if(frase[i]=='B' || frase[i]=='C' || frase[i]=='D' ||
		   frase[i]=='F' || frase[i]=='G' || frase[i]=='H' ||  	
		   frase[i]=='J' || frase[i]=='K' || frase[i]=='L' ||	
           frase[i]=='M' || frase[i]=='N' || frase[i]=='P' ||                                  
		   frase[i]=='Q' || frase[i]=='R' || frase[i]=='S' ||
           frase[i]=='T' || frase[i]=='V' || frase[i]=='W' ||
		   frase[i]=='X' || frase[i]=='Y' || frase[i]=='Z' || 
		   
		   frase[i]=='b' || frase[i]=='c' || frase[i]=='d' ||
		   frase[i]=='f' || frase[i]=='g' || frase[i]=='h' ||  	
		   frase[i]=='j' || frase[i]=='k' || frase[i]=='l' ||	
           frase[i]=='m' || frase[i]=='n' || frase[i]=='p' ||                                  
		   frase[i]=='q' || frase[i]=='r' || frase[i]=='s' ||
           frase[i]=='t' || frase[i]=='v' || frase[i]=='w' ||
		   frase[i]=='x' || frase[i]=='y' || frase[i]=='z'  )
		   {
		    QuantidadeDeConsoantes ++;	
		   }
		}	
	
    cout<<"\nA QuantidadeDeVogais       "<<QuantidadeDeVogais;
	cout<<"\nA QuantidadeDe Consoantes  "<<QuantidadeDeConsoantes;
	}


void InverterCaracteres     (char frase[50])
	{
	int troca,ContarCaracteres;
	
	ContarCaracteres=strlen(frase);
	
	
	for (int i=0;i<ContarCaracteres/2;i++) 
		{		
        troca=frase[i];
        frase[i]=frase[ContarCaracteres-1-i];
		frase[ContarCaracteres-1-i]=troca;    
	    }
		
	cout<<"\nA Palavra Invertida e  "<<frase<<"\n";	
		
	
	}






