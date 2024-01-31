#include <iostream>
using namespace std;

int main ()
   {

	int *TA,*TB;
	
	TA=new int;
	TB=new int;
	
	cout<<"\nDigite O Tamanho Do Vetor A    ";
	cin>>*TA;
	cout<<"\nDigite O Tamanho Do Vetor B    "; 
	cin>>*TB;
	
	int *A,*B;
	
	A= new int[*TA];	
    B= new int[*TB];
	
	int *i,*j,*k; //contadores
    
	 *k=0; //Contador de soma da INTERSECAO
	
	for (*i=0;*i<*TA;*i++)
		{
		cout<<"\nDigite O Tamanho Do Vetor A Numero   "<<*i<<"  ";
		cin>>A[*i];
		}
	
	
	for (*i=0;*i<*TB;*i++)
		{
		cout<<"\nDigite O Tamanho Do Vetor B Numero   "<<*i<<"  ";
		cin>>B[*i];
		}
	
	// UNIAO E A INTERSECAO
	
	int *UNIAO,*INTERSECAO;
	
	UNIAO= new int[*TA+ *TB];
	INTERSECAO=new int;
	
	for (*i=0;*i<*TA;*i++) // UNIAO COMO TODO A
		{
		UNIAO[*i]=A[*i];
		}
	
	for (*i=*TA;*i<*TA+ *TB;*i++) // UNIAO COMO TODO B DEPOIS DO A
		{
		UNIAO[*i]= B[*i];
		}
	
	
	// INTERSECAO
	for (*i=0;*i<*TA;*i++)
		{
		for (*j=0;*j<*TB;*j++) 
			{
			if	(A[*i]==B[*j])
				{
				INTERSECAO[*k]=A[*i];
				*k++;
				}
			}
		}
	
	for (*i=0;*i<(*TA+*TB);*i++) //VISUALIZAR O RESULTADO DA UNIAO
		{
		cout<<UNIAO[*i]<<"\n";
		}
	
	for (*i=0;i<k;*i++) //VISUALIZAR O RESULTADO DA INTERSECAO
		{
		cout<<INTERSECAO[*i]<<"\n";
		}
	
   }

