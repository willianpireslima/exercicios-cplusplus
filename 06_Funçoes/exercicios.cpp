#include <iostream>
using namespace std;


int main ()
	{
	int *A,*B,*C;
	int i;
	
	A=new int[5];
	B=new int[5];
	C=new int[5];
	
	for (i=0;i<5;i++)
		{
		cout<<"\nDigite o Valor Do Vetor A Posicao   "<<i+1<<"  ";
		cin >>A[i];
		}
	
	for (i=0;i<5;i++)
		{
		cout<<"\nDigite o Valor Do Vetor A Posicao   "<<i+1<<"  ";
		cin >>B[i];
		}	
	
	for (i=0;i<5;i++)
		{
		
		C[i]=A[i]+B[i];
		}	
	
	for (i=0;i<5;i++)
		{
		cout<<"\n"<<C[i];
		
		}	
	
	
	
	
	
	
	}
	
	
	
	
	
