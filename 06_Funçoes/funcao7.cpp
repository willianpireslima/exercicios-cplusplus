//• Um jogador rola dois dados. Cada dado tem seis faces estampadas com os números 1, 2, 3, 4,
//5 e 6.
//• Calcula-se a soma dos números estampados nas duas faces que estão voltadas para cima.
//• Se a soma é igual a 7 ou igual a 11 na primeira jogada o jogador vence.
//• Se a soma é 2, 3 ou 12 na primeira jogada ( chamada “craps” ) o jogador perde ( ou seja, a
//casa vence ).
//• Se a soma é 4, 5, 6, 8, 9 ou 10 na primeira jogada esta soma torna-se os pontos do jogador.
//• Para vencer o jogador precisa continuar a rolar os dados até fazer a mesma quantidade de
//pontos numa única jogada. Mas se o jogador obtiver 7 pontos numa única jogada antes de
//fazer os seus pontos ele perde.
//• Usar funções para agrupar os trechos de códigos que são usados repetidamente ao longo do
//programa.

#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <stdio.h>
#include <cstdlib> 
using namespace std;

int Aleatoriedade    ();
void PrimeiraRodada (int Soma);
void ProximasRodadas ();

int main ()
	{
    int SomaDosDados,ProximaJogada;
    char x;
    	
	cout<<"\nDigite Enter Para Comecar A Jogar";
	x = getchar();
	
	SomaDosDados=Aleatoriedade ();
    
	if (SomaDosDados==7 ||SomaDosDados ==11)
		{
		cout<<"\nASoma do resultado dos dados e "
			<<SomaDosDados
			<<"\nVoce Venceu";	
		}	
		else
			{
			if (SomaDosDados==2 || SomaDosDados==3 || SomaDosDados==12)
				{
				cout<<"\nASoma do resultado dos dados e "<<SomaDosDados
				    <<"\nVoce Perdeu";	
				}			
                else
					{
					if (SomaDosDados==4 || SomaDosDados==5 || SomaDosDados==6 ||
						SomaDosDados==8 || SomaDosDados==9 || SomaDosDados==10)
						{
						ProximaJogada=SomaDosDados;
						
						do
						{					
						cout<<"\nASoma do resultado dos dados e "
							<<SomaDosDados
							<<"\nVoce ira continuar nas proximas rodadas"
						    <<"\n";
						
						cout<<"\nDigite Enter Para Comecar As Proximas rodadas";
						x = getchar();
						SomaDosDados=Aleatoriedade ();
							
							if(ProximaJogada==SomaDosDados)
								{
								cout<<"\nASoma do resultado dos dados e "<<SomaDosDados
									<<"\nVoce Venceu";		
								SomaDosDados=20;
								}
						        else
									{
									if(ProximaJogada==7)
										{
										cout<<"\nASoma do resultado dos dados e "<<SomaDosDados
											<<"\nVoce Perdeu";		
										SomaDosDados=20;
										}							
									}																							
						}while(SomaDosDados!=20);
						
						// condicacao de parada						
						}				
					}		
			}
    

	SomaDosDados=Aleatoriedade ();
	
	
	}
	
int Aleatoriedade ()
	{
	int Dado1,Dado2;
	
	srand (time(0));
	
    Dado1=1+(rand()%6);
		 
	Dado2=1+(rand()%6);
	
	return Dado1+Dado2;
	}	

	
	
	
	
	
	
	
	
	
	