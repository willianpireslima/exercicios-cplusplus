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
	
	int i,j;
	
	int **Matriz = NULL;
	
	Matriz= new int *[*NL];
	

	// Alocando Memoria Nas Colunas
	
	for (i=0; i< *NC; i++) {
				
		Matriz[i] = new int [*NC];
		
		}	  
	  
	  
	  for (i=0; i< *NL; i++) {
				
		for (j=0; j< *NC; j++) {
			
			cout << "Digite os Valores Do Vetor Da Linha  " 
                 << i << "  Coluna  " << j << "  ";
						 
			cin  >> Matriz[i][j] ;
			}
		}
	
	cout << "\n";
	
	for (i=0; i< *NL; i++) {
				
		for (j=0; j< *NC; j++) {
			
			cout << Matriz[i][j] << "\t";			 
			}
		
		cout << "\n";	
		}	   	
	
	delete [] NL;
	delete [] NC;
	delete [] Matriz;
	}