#include <iostream>
using namespace std;

int main () {
	
	int *Tamanho;
	int i;
	
	Tamanho = new int;
	
	cout << "Digite o Tamanho do vetor   ";
	cin  >> *Tamanho;
	
	cout << "Valor De Tamanho   "  << *Tamanho << endl;
	cout << "Ponteiro Tamanho   "  << Tamanho  << endl;

	cout << "\n"; 
	
	int *VetorA,*VetorB,*VetorC ;
	
	// Alocando Memoria
	
	VetorA = new int[*Tamanho];
	VetorB = new int[*Tamanho];
	VetorC = new int[*Tamanho];
	
	for (i=0; i<*Tamanho; i++) {
			
		cout << "Digite os Valores De A   ";
		cin  >>VetorA[i] ;
		}
	
	cout << "\n"; 
	
	for (i=0; i<*Tamanho; i++) {
		
		cout << "Digite os Valores De B   ";
		cin  >>VetorB[i] ;
		}
	
	for (i=0; i<*Tamanho; i++) {
			
		
		VetorC[i] = VetorA[i] * VetorB[i];
		}
	
	cout << "\n"; 
	
	cout << "A" << "\t" <<  "B" << "\t" <<  "C" << "\n";
	
	for (i=0; i<*Tamanho; i++) {
			
		
		cout << VetorA[i] << "\t" << VetorB[i]  << "\t" << VetorC[i] << "\n"; 
		}
	
	
	// Desalocando Memoria
	
	delete[] VetorA;
	delete[] VetorB;
	delete[] VetorC; 	
	}