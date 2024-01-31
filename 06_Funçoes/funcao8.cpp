#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <stdio.h>
#include <cstdlib> 
using namespace std;

int  ResultadosDoSorteio   ();
void  Apostas               ();

int main ()
	{
	void  Apostas               ();
	
	}
	
int ResultadosDoSorteio   ()
	{
	int DezenasVencedoras[5];
	
	cout<<"\nDigite As 5 Dezenas Sorteadas\n";
	
	for (int i=0;i<5;i++)
		{
		cout<<"\nDigite o valor da "<<i+1<<"° Dezena Sorteadas";	
		cin >>DezenasVencedoras[i];		
		}
    return DezenasVencedoras[5];
	}


void Apostas               ()	
	{
	int NumeroDaAposta,QtdNumerosApostados,DezenasSorteadas[5];
    
	DezenasSorteadas[5]=ResultadosDoSorteio   ();
	
	int Somador,QtdTresPontos, QtdQuatroPontos,QtdCincoPontos;	
	    
    QtdTresPontos=0;
	QtdQuatroPontos    =0;
	QtdCincoPontos     =0 ;


	int *ApostadoresTresPontos;
    ApostadoresTresPontos  = (int *) malloc (1000*sizeof (int));
	
	int *ApostadoresQuatroPontos;
 	ApostadoresQuatroPontos  = (int *) malloc (1000*sizeof (int));
	
	int *ApostadoresCincoPontos;
    ApostadoresCincoPontos  = (int *) malloc (1000*sizeof (int));
		
	
	do
	{			
	Somador=0;
	
	cout<<"\nDigite o Numero da Aposta                                        ";
	cin >>NumeroDaAposta;
	cout<<"\nDigite a quantidade de números (dezenas) apostados ( 5, 6 ou 7)  ";
	cin >>QtdNumerosApostados;
	
	int VetorDeNumeros[QtdNumerosApostados];
	
	//inserir os valores da aposta
	
	for (int i=0;i<QtdNumerosApostados;i++)
		{
		cout<<"\nDigite a Dezena De Numero "<<i+1<<"°                         ";
		cin >>VetorDeNumeros[i];
		}
	
	//verificar a quantidade de de acertos de cada apostador e
	//e armazenar o numero da aposta
		
	for (int i=0;i<QtdNumerosApostados;i++)
		{
		for ( int j=0;j<5;i++)
			{
			if (VetorDeNumeros[i]==DezenasSorteadas[j])
				{
				Somador++;		
				}		
            }					
		}
	
	//armazenar a quantidade de cada apostador que venceu 3,4 ou 5
	
	if (Somador==3)
		{
		ApostadoresTresPontos[QtdTresPontos]=NumeroDaAposta;
		QtdTresPontos++;	
		}
		else
			{
			if (Somador==4)
				{
				ApostadoresQuatroPontos[QtdQuatroPontos]=NumeroDaAposta;
				QtdQuatroPontos++;	
				}	
			    else
					{
					if (Somador==5)
						{
						ApostadoresCincoPontos[QtdCincoPontos]=NumeroDaAposta;
						QtdCincoPontos++;	
						}	
					}			
			}
	
	}while(NumeroDaAposta>0);	

	
	// realocando memoria
	
	ApostadoresTresPontos =(int *)  realloc (ApostadoresTresPontos,QtdTresPontos * sizeof (int));
	
    ApostadoresQuatroPontos=(int *) realloc (ApostadoresQuatroPontos,QtdQuatroPontos * sizeof (int));
	
    ApostadoresCincoPontos =(int *) realloc (ApostadoresCincoPontos,QtdCincoPontos * sizeof (int));
	
	
    cout<<"\nO Total de Vencedores De Tres Ponto sao  "<<QtdTresPontos;
	cout<<"\nO Vencedores De Tres Ponto sao";			
	    	
	int i;
	
	for (int i=0;i<QtdTresPontos;i++)
		{
		cout<<ApostadoresTresPontos[i]<<"\n";			
		}
	
	cout<<"\nO Total de Vencedores De Quatro Ponto sao  "<<QtdQuatroPontos;
	cout<<"\nO Vencedores De Quatro Pontos sao\n";			
	
	for (i=0;i<QtdQuatroPontos;i++)
		{
		cout<<ApostadoresTresPontos[i]<<"\n";			
		}
	
	cout<<"\nO Total de Vencedores De Cinco Ponto sao  "<<QtdCincoPontos;
	cout<<"\nO Vencedores De Cinco Pontos sao\n";			
	
	for (i=0;i<QtdCincoPontos;i++)
		{
		cout<<ApostadoresTresPontos[i]<<"\n";			
		}	
	  	

	
	

	}	
	


    
	
	
	
	
	
	
	
	
	