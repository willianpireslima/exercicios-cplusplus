#include <iostream>
using namespace std;

int Soma           (int *num1, int *num2);
int Subtracao      (int *num1, int *num2);
int Multiplicacao  (int *num1, int *num2);
double Divisao     (int *num1, int *num2);

int Soma           (int *num1, int *num2) {
	
	return *num1 + *num2;
	}

int Subtracao      (int *num1, int *num2) {
	
	return *num1 - *num2;
	}

int Multiplicacao  (int *num1, int *num2) {
	
	return *num1 * *num2;
	}

double Divisao     (int *num1, int *num2) {
	
	return *num1 / *num2;
	}






int main () {
	
	int a,b;
	
	
	cout << "Digite O Primeiro Numero   ";  
	cin  >> a;
	cout << "Digite O Segundo  Numero   ";  
	cin  >> b;
	
	cout << "\n";
	
	cout << "Soma            "   << Soma          (&a,&b) << endl;
	cout << "Subtracao       "   << Subtracao     (&a,&b) << endl;
	cout << "Multiplicacao   "   << Multiplicacao (&a,&b) << endl;
	cout << "Divisao         "   << Divisao       (&a,&b) << endl;
	}