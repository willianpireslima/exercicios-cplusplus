#include <iostream>
using namespace std;

void LerPositivo(float &Valor);
void TipoTriangulo (float &a ,float &b,float &c);


int main ()
	{
	float L1,L2,L3;
	string tipo;
	char continuar;
	
	do
	{
	
	
	cout<<"\nDigite o lado1    ";	
	cin >>L1;	
	LerPositivo(L1);
	
	cout<<"\nDigite o lado2    ";	
	cin >>L2;	
	LerPositivo(L2);
	
	cout<<"\nDigite o lado3    ";	
	cin >>L3;	
	LerPositivo(L3);		
    
	cout<<"\nDigite S ou s para continuar ";	
	cin >>continuar;

	}while(continuar=='S' || continuar=='s');
	
	TipoTriangulo (L1,L2,L3);
	
	}
	
void LerPositivo(float &Valor)
	{
	string msm;
	
	do
	{
	cout<<msm;
	cin >>Valor;	
		
		
	}while(Valor<0);
    	
	
	}


void TipoTriangulo (float &a ,float &b,float &c)
	{
	if (a+b>c && a+c>b && b+c>a)
	{
		if (a==b && b==c)
			{
			cout<<"Equilatero";	
	        }
			else
				{
				if (a==b || a==c || b==c)
					{
					cout<<"Isosceles";		
			        }
				    else 
						{
						cout<<"Escaleno";	
						}	
											
				}	
	
	}			
        	
	}		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
