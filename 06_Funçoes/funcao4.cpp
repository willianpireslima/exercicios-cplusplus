//ler valor 	N (inteiro) n>1
//ler valor extra (double)
// ler valor extra double
//criar vetor double tannho N
//utizando flag char (S ou s )

#include <iostream>
using namespace std;

int    lerValor           (int limiteInferior,int LimiteSuperior); // void lerValor(int &valor,int limiteInferior,int LimiteSuperior)
double *CriarObterVetor   (int Tamanho);                            //void CriarObterVetor (int,Tamanho,double *Vetor)
double *MultiplicarVetor  (int Tamanho,double *Vetor,double ValorExtra);// esse valor e o numero extra          
int    ContaValor         (int Tamanho,double *Vetor,double ValorExtra);// esse valor e o numero extra
void   EscreveVetor       (int Tamanho,double *Vetor);  
void   DestroiVetor       (double *Vetor); 

int main ()
	{
	 char flag;
	
	do	
	{    
	   
		int N;
		double ValorExtra,*Vetor,*VetorMultiplicado;
		
		
		N=lerValor (2,4);// como vai retornar um inteiro e so armazenar em N
	
		
		cout<<"\nDigite o valor extra double";
		cin >>ValorExtra;
		
		Vetor=CriarObterVetor(N);  
		
		VetorMultiplicado=MultiplicarVetor (N,Vetor,ValorExtra);
		
		int Conta;
		
		Conta=ContaValor(N,Vetor,ValorExtra);
		
		cout<<"\nVetor original:\n";
		EscreveVetor       (N,Vetor); 
		
		cout<<"\nVetor original Mulpicado por Valor Extra:\n";
		EscreveVetor       (N,VetorMultiplicado); 
		
		cout<<"\nValor Extra"<<ValorExtra<<"aparece";
		cout<<Conta<<"no vetor original aparece";
	
	cout<<"\nDigite Sou s para continuar";
	cout<<"\nDigite qualquer uoutro caracterece para encerrar";
	cin >>flag;
	
	}while(flag=='S'|| flag=='s'); 
	
	}
	
int    lerValor  (int limiteInferior,int LimiteSuperior)
	{
    int valor;	
      
    do
	{	
	    
		cout<<"\nDigite um valor >="<<limiteInferior;
		cout<<"\n e <="<<LimiteSuperior;
	    cin >>valor;
	}while (valor < limiteInferior || valor > LimiteSuperior);//oque nao me serve
		
    return valor;
	}
	
double *CriarObterVetor   (int Tamanho)
	{
    double *Vetor;
    Vetor=new double[Tamanho];
    
    cout<<"\nDigite os valore para o vetor\n";
    
    for (int i=0;i<Tamanho;i++)
		{
		cout<<"\nDigite o valor para o vetor na posicao  "<<i;
		cin >>Vetor[i];
	    }
	
	
	return Vetor; //sem asterisco pois o vetor e ponteiro
	}	
	
double *MultiplicarVetor  (int Tamanho,double *Vetor,double ValorExtra)
	{
	double *ResultadoDaMultiplicacao;
	ResultadoDaMultiplicacao=new double[Tamanho];

	for (int i=0;i<Tamanho;i++)
		{
		ResultadoDaMultiplicacao[i]=Vetor[i]*ValorExtra;
	    }
	
	for (int i=0;i<Tamanho;i++)
		{
		Vetor[i]=ResultadoDaMultiplicacao[i];
	    }
	
	
	
	
	return Vetor;
	}	
	
int    ContaValor (int Tamanho,double *Vetor,double ValorExtra)	
	{
    int conta =0;// serve para acumular
    
    for (int i=0;i<Tamanho;i++)
		{
		if(ValorExtra==Vetor[i])
			{
			conta++;
			}
	    
	    }
	return conta;
	}

void   EscreveVetor       (int Tamanho,double *Vetor)
	{
    cout<<"Vetor[";

	
	
	for (int i=0;i<Tamanho;i++)
		{
			cout<<Vetor[i]<<"\t";	
	    }
	
	cout<<"]"<<endl;
	
	}

void   DestroiVetor       (double *Vetor) 
	{
    delete []Vetor;
    
    Vetor=NULL;		
	}
