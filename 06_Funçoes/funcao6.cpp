//Questão 6 - ( usar funções ) Crie um programa em C++ para jogar o Jogo-da-velha. Use um array de
//caracteres ( char ) com 3 linhas e 3 colunas, cujas células deverão ser inicializadas com um caracter
//constante '+'. O programa deve conter dois jogadores: Jogador1 e Jogador2.
//• O Jogador1, na sua vez, deve escrever na posição ( i, j ) do array cujo conteúdo seja um caracter
//constante '+' o caracter 'X'. Retornando false ou verdadeiro, caso a jogada seja bem sucedida ou
//mal sucedida.
//• Jogador2, na sua vez, deve escrever na posição ( i, j ) do array cujo conteúdo seja um caracter
//constante '+' o caracter 'O'. Retornado false ou verdadeiro, caso a jogada seja bem sucedida ou
//mal sucedida.
//• Depois de cada jogada:
//• Mostrar na tela o conteúdo do array 3 por 3.
//• Verificar se o jogador venceu a partida. Um jogador vence a partida caso ele obtenha uma
//linha, coluna ou diagonal completa com 'X' ( Jogador1 ) ou 'O' ( Jogador2 ).
//• Caso a matriz não contenha mais nenhuma célula cujo conteúdo seja um caracter constante '+' a
//partida deve ser encerrada com empate.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;

void EntrarComAJogada     (int Linha,int Coluna,char Jogada,char Matriz[3][3]);
void MostrarArray3X3      ();
void VerificarVencedor    ();

int main ()
	{
	int Linha,Coluna;	
    char Jogada;  
	char Matriz3X3[3][3];
	
	for (int i=0; i<3;i++)
		for (int j=0;j<3;j++)
			{
			Matriz3X3[i][j]='+';	
			}
	for (int i=0;i<3;i++)
		{
		
		cout<<"Digite a sua jogada PlayerOne X ou O   ";
		cin >>Jogada;
		cout<<"Na linha                               ";
		cin >>Linha;
		cout<<"Na Coluna                              ";
		cin >>Coluna;
			
	   	EntrarComAJogada     (Linha,Coluna,Jogada,Matriz3X3);
		
		cout<<"Digite a sua jogada PlayerTwo X ou O   " ;
		cin >>Jogada;
		cout<<"Na linha                               ";
		cin >>Linha;
		cout<<"Na Coluna                              ";
		cin >>Coluna;						
		
		EntrarComAJogada     (Linha,Coluna,Jogada,Matriz3X3);
		}
	}
	
void EntrarComAJogada     (int Linha,int Coluna,char Jogada,char Matriz[3][3])
	{
  
	
		if(Matriz[Linha][Coluna]=='+')	
	    {
		Matriz[Linha][Coluna]=Jogada;
		cout<<"\nJogada Verdadeira";
		}
    	else
	        {
			cout<<"\nJogada Falsa";	
			}
    }
	
void MostrarArray3X3      (char Matriz[3][3])
	{
	
			for (int i=0; i<3;i++)
				{
				
                for (int j=0;j<3;j++)
					{
					cout<<Matriz[i][j]<<"\t";	
					}
				cout<<"\n";
				}	
	}

void VerificarVencedor    (char Matriz[3][3])
	{
	//VERIFICANDO LINHAS E COLUNAS
	
	if( (Matriz[0][0]=='X' && Matriz[1][0]=='X' && Matriz[2][0]=='X') ||	
        (Matriz[0][1]=='X' && Matriz[1][1]=='X' && Matriz[2][1]=='X') ||
        (Matriz[0][2]=='X' && Matriz[1][2]=='X' && Matriz[2][2]=='X') ||
        (Matriz[0][0]=='X' && Matriz[1][1]=='X' && Matriz[2][2]=='X') ||
        (Matriz[0][2]=='X' && Matriz[1][1]=='X' && Matriz[2][0]=='X')   )
	   {
	   	cout<<"\nO PlayerOne De X Venceu";
	   }
	else
		{
		if( (Matriz[0][0]=='O' && Matriz[1][0]=='O' && Matriz[2][0]=='O') ||	
            (Matriz[0][1]=='O' && Matriz[1][1]=='O' && Matriz[2][1]=='O') ||
            (Matriz[0][2]=='O' && Matriz[1][2]=='O' && Matriz[2][2]=='O') ||
            (Matriz[0][0]=='O' && Matriz[1][1]=='O' && Matriz[2][2]=='O') ||
            (Matriz[0][2]=='O' && Matriz[1][1]=='O' && Matriz[2][0]=='O')  )
		   {
		   	cout<<"\nO PlayerTwo De O Venceu";
		   }	
		   else
			   {
				cout<<"\nHouve um Empate";	   
			   }
		}
	
	
	
	
	}	

	
	
	
	
	
	
	
	
	