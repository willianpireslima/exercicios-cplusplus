#include <iostream>
using namespace std;

int main ()
   {
	int *SIZE;
	
	SIZE= new int;
	
	cout<<"\nDigite O Tamanho Dos Vetores A e B   ";
	cin>>*SIZE;
	
	int *A,*B,*C;
	
	A= new int[*SIZE];
	B= new int[*SIZE];
	C=new int;
	
	int i;
	
	
	for (i=0;i<*SIZE;i++) //ZERADOR DE C
		{
			C[i]=0;
		}
	
	for (i=0;i<*SIZE;i++)
		{
		cout<<"\nDigiteOs Valores Do Vetor A Numero   "<<i<<"  ";
		cin>>A[i];
		}
	for (i=0;i<*SIZE;i++)
		{
		cout<<"\nDigite Os Valores Vetor B Numero     "<<i<<"  ";
		cin>>B[i];
		}

	for (i=0;i<*SIZE;i++) //SOMA DE VETORES A E B
		{
		C[i]= C[i]+A[i]+B[i];
		}
	
	for (i=0;i<*SIZE;i++) //VISUALIZAR O RESULTADO
		{
		cout<<C[i]<<"\t"<<A[i]<<"\t"<<B[i]<<"\n";
		}   
   }
