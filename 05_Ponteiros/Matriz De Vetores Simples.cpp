#include <iostream>
using namespace std;

int main () {
	
	int *NL,*NC;
	
	NL = new int;
	NC = new int;

	
	cout << "Digite o Numero De Linhas    ";
	cin  >> *NL;
	cout << "Digite o Numero De Colunas   ";
	cin  >> *NC;
	
	cout << "\n";
	
	int i,j,k;
	
	int *Matriz;
	
	
	Matriz = new int[(*NL) * (*NC)];
	
	for (i=0; i< *NL; i++) {
				
		for (j=0; j< *NC; j++) {
			
			cout << "Digite os Valores Do Vetor Da Linha  " 
                 << i << "  Coluna  " << j << "  ";
			
			k = i * *NC + j;
						 
			cin  >> Matriz[k];
			}
		}
	
	cout << "\n";
	
	for (i=0; i< *NL; i++) {
				
		for (j=0; j< *NC; j++) {
			
			k = i * *NC + j;
			
			cout << Matriz[k] << "\t";			 
			}
		
		cout << "\n";	
		}	   	
	
	cout << "\n";
	
	for (i=0; i< *NL; i++) {
				
		for (j=0; j< *NC; j++) {
			
			k = i * *NC + j;
			
			cout << k << "\t";		 
			}
		
		cout << "\n";	
		}	 
	
	
	
	delete [] NL;
	delete [] NC;
	delete [] Matriz;
	}