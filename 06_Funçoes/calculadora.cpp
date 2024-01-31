# include <iostream>
#include <stdlib.h>
using namespace std;

int SOMA           (int *a,int *b);
int Subtracao      (int *a,int *b);
int Multiplicacao  (int *a,int *b);
int Divisao        (int *a,int *b);


int SOMA           (int *a,int *b)
	{
	cout<<"\nO Resultado Da Soma E   "	
	    <<*a+*b	
	    <<"\nO Endereço de Memoria de a e    "
	    <<&a
	    <<"\nO Endereço de Memoria de b e    "	
	    <<&b
	    <<"\n";
	a=new int;
	b=new int;
	
	return *a+*b;
	}
int Subtracao      (int *a,int *b)
	{
	cout<<"\nO Resultado Da Subtracacao E    "
	    <<*a-*b	
	    <<"\nO Endereço de Memoria de a e    "
	    <<a
	    <<"\nO Endereço de Memoria de b e    "	
	    <<b
	    <<"\n";
	return *a-*b;
	}
int Multiplicacao  (int *a,int *b)
	{
	cout<<"\nO Resultado Da Multiplicacao E   "	
	    <<(*a)*(*b)
	    <<"\nO Endereço de Memoria de a e     "
	    <<a
	    <<"\nO Endereço de Memoria de b e     "	
	    <<b
	    <<"\n";
	return (*a)*(*b);
	}
int Divisao (int *a,int *b)
	{
	cout<<"\nO Resultado Da Divisao E        "
	    <<(*a)/(*b)
	    <<"\nO Endereço de Memoria de a e    "
	    <<a
	    <<"\nO Endereço de Memoria de b e    "	
	    <<b
	    <<"\n";
	return (*a)/(*b);
	}


int main ()
	{
	int Num1,Num2;
	string operacao;
	
	cout<<"\nCALCULADORA"
	    <<"\nDigite o primeiro numero            ";  
	cin >>Num1;    
	cout<<"\nO Endereço de Memoria Do Num1 e     "  
		<<&Num1; 
	cout<<"\nDigite o Segundo numero             ";  
	cin >>Num2;    
	cout<<"\nO Endereço de Memoria Do Num2 e     "  
		<<&Num2; 
	cout<<"\nDigite a operaçao desejada          "
	    <<"\n+ Pra soma                          "	
	    <<"\n* Pra Multiplicacao                 "	
	    <<"\n/ Pra Divisao                       ";	
	cin>>operacao;
	
	
	if(operacao=="+") 
		{
		SOMA          (&Num1,&Num2);
		}	
	    else
	    {
			if(operacao=="-") 
			{
			Subtracao     (&Num1,&Num2);
			}	
		    else
		    {
				if(operacao=="*") 
				{
				Multiplicacao (&Num1,&Num2);
				}	
			    else
			    {
					if(operacao=="/") 
					{
					Divisao    (&Num1,&Num2);
					}	
				}
			}	
		}	
		
	return 0;
	}
