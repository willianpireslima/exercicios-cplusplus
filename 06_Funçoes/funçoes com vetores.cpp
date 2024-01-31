#include <iostream>
using namespace std;


int soma (int *a,int *b);

int MultiplicacaoDaSoma (int *VezesSoma);

int main ()
	{
	int *num1,*num2,*valor,*valor2;
	
	num1=new int;
	num2=new int;
	valor=new int;
	valor2=new int;
	
	cout<<"\nDigite o primeiro valor    ";
	cin >>*num1;
	cout<<"\nDigite o segundo valor     ";
	cin >>*num2;	
	
    cout<<"\nO Ponteiro do Primeiro valor   "<<*num1
		<<"\nO Valor    do Primeiro valor   "<<num1
		<<"\nO Ponteiro do Primeiro valor   "<<*num2
		<<"\nO Valor    do Primeiro valor   "<<num2;
	
	*valor=soma (num1,num2);
	
	*valor2=MultiplicacaoDaSoma (valor);
	
	cout<<"\nO Ponteiro  da soma e          "<<*valor;
	cout<<"\nO Valor da soma e              "<<valor;
	cout<<"\nO Ponteiro  do multiplicador de soma e          "<<*valor2;
	cout<<"\nO Valor do multiplicador    soma e              "<<valor2;
	
	
	}


int soma (int *a,int *b)
	{

     return *a+*b;

	}
	
int MultiplicacaoDaSoma (int *VezesSoma)
	{
      
    return *VezesSoma*5;  
	}	
	
	
