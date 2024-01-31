#include <iostream>
#include <math.h>
using namespace std;

class Derivada  {
	
	
	private:
		int A,B,C;
	
	public:
	   	bool	setA (double  aux);
		void	setB (double  aux);
		void	setC (double  aux);
	
		double	getA ();
		double	getB ();
		double	getC ();
	
		double derivada  ();
        void   EixoXandY (int X, int Y);
	
	};
	


// modificar


bool Derivada ::	setA (double  aux) {
		
	if (aux != 0) {
	
		A = aux;	
		return true;
	}
	
	return false;
	}


void Derivada ::	setB (double aux) {
	
		
	B = aux;
	}
void Derivada ::	setC (double  aux) {
	
	C = aux;
	}

// receber

double Derivada ::	getA () {
	
	return A;
	}

double Derivada ::	getB () {
	
	return B;
	}
double Derivada ::	getC () {
	
	return C;
	}


double Derivada :: derivada () {
	
	double xi,deriv,equacao;
	
	xi = -B / (2*A);
	
	deriv = 2*A*xi + 2;

	equacao = A * (deriv*deriv) + B * deriv + C ;
	
	
	return equacao;
	}


void Derivada :: EixoXandY (int X, int Y) {
	
	
	int limiteX,limiteY,Tamanho,i;
	
	limiteX = X/2;
	limiteY = Y/2;
	Tamanho = derivada  ();
	
	int VetorX[Tamanho],VetorY[limiteY];
	
	
	for (i = limiteX; i< Tamanho; i++) {
		
		VetorX[i] = i;
		}
	
	for (i = Tamanho; i< limiteY; i++) {
		
		VetorY[i] = i;
		}
	
	
	cout << "As Coordenadas De X\n";
	
	for (i = limiteX; i < Tamanho ; i++) {
		
	cout << VetorX[i] << "\n";
	}
	
	cout << "\n";
	
	cout << "As Coordenadas De Y\n";
	   	
	for (i = Tamanho; i< limiteY; i++) {
		
	cout << VetorY[i] << "\n" ;
	}
		
	
	}


int main () {
	
	double a,b,c;
	class  Derivada obj;
	int    coordenadax,coordenaday;
	
	cout << "Digite os Coeficiente" << endl;
   	cout << "Digite A  ";
   	cin  >>a;
	cout << "Digite B  ";
   	cin  >>b;
	cout << "Digite C  ";
   	cin  >>c;
	
	cout << "\n";
	   
	obj.setA (a);
	obj.setB (b);
	obj.setC (c);
		
	cout << "A        = " << obj.getA     () << endl;
	cout << "B        = " << obj.getB     () << endl;
	cout << "C        = " << obj.getC     () << endl;
  	cout << "Derivada = " << obj.derivada () << endl;
	
	cout << "\n";
	
	cout << "Digite A Quantiade De Coordenadas X ";
   	cin  >>coordenadax;
	cout << "Digite A Quantiade De Coordenadas Y ";
   	cin  >>coordenaday;
	
	
	
	obj.EixoXandY (coordenadax,coordenaday );
	
	}