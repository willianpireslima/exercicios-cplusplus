//a) Cada algarismo do número é multiplicado por um peso começando de 2 da direita para a esquerda.
//Para cada algarismo o peso é acrescido de 1. Soma-se os produtos obtidos.
//1x5 + 8x4 + 4x3 + 1x2 = 51
//b) Calcula-se o resto da divisão desta soma por 11:
//51 % 11 = 7
//c) Subtrai-se de 11 o resto obtido:
//11 - 7 = 4
//d) Se o valor obtido for 10 ou 11, o dígito verificador será o 0, nos outros casos, o dígito verificador é o
//próprio valor encontrado.
#include <iostream>
using namespace std;


int MultiplicarPeloPeso    (int &Numero);
int RestoDaDivisaoSomaOnze (int &ResultadoDaMultiplicacao);
int SubtrairPorOnze        (int &ResultadoDaDivisao);
int VerificarDigito        (int &ResultadoDaDivisao); 


int main ()
	{
	int Numero,ResultadoDaMultiplicacao,ResultadoDaDivisao,UltimaVeficacao; 
	
	cout<<"\nDigite A Sua Senha  ";
	cin >>Numero;
	
	ResultadoDaMultiplicacao=MultiplicarPeloPeso    (Numero);
	
    ResultadoDaDivisao =RestoDaDivisaoSomaOnze (ResultadoDaMultiplicacao);
	
	UltimaVeficacao=SubtrairPorOnze(ResultadoDaDivisao);
	
	cout<<VerificarDigito        (UltimaVeficacao);
	
	}

int MultiplicarPeloPeso    (int &Numero)
	{
	int Multiplicador,ResultadoDaMultiplicacao;

	//Multiplicador serve para multiplicar o numero do resto e divisao para separar
	//ResultadoDaMultiplicacao serve para armazenar o resultado final
	Multiplicador=1;
	ResultadoDaMultiplicacao=0;
	//armazenar seus algarismos no vetor do fim para o comeco	
	
	int Vetor[5];

	for (int i=0;i<5;i++)	
		{		
		
		
		Vetor[i]=(Multiplicador*10)%Numero;
		Vetor[i]=(Multiplicador*1)/Vetor[i];
		
		Multiplicador=Multiplicador*10;
		}
	
		for (int i=0;i<5;i++)	
		{				
		ResultadoDaMultiplicacao=ResultadoDaMultiplicacao+Vetor[i]*(2+i);		
		}
	
	return ResultadoDaMultiplicacao;
	}	
	
int RestoDaDivisaoSomaOnze (int &ResultadoDaMultiplicacao)
	{		
    
	
	
	return 	ResultadoDaMultiplicacao%11;
	}	
	
int SubtrairPorOnze        (int &ResultadoDaDivisao)
	{	
	return ResultadoDaDivisao-11;		
	}	
	
int VerificarDigito        (int &ResultadoDaDivisao)
	{
	if(ResultadoDaDivisao==10 || ResultadoDaDivisao==11)	
	    {
		ResultadoDaDivisao=0;	
		} 
	    else
			{
			ResultadoDaDivisao=ResultadoDaDivisao;
			}
	
	return ResultadoDaDivisao;
	}


		
