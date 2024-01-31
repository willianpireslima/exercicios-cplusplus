#include <iostream>
#include <math.h >
using namespace std;


class Descobrir {
	
	private:
		
		double a,b,c;
		double Delta ()const;
	
	public:
		
		void   setA  (double aux); // A!=0	
	    void   setB  (double aux);
		void   setC  (double aux);
		
		double getA  ()const;
	    double getB  ()const;
	    double getC  ()const;
	    
	    void CalculaRaizes ();
	
	};

	
double Descobrir  :: Delta ()const {
		
	return (b*b) - (4*a*c);
	}


// metodo inserir valor

void Descobrir  ::  setA (double aux ){
	
	   a = aux;
	  }	

void Descobrir  ::  setB (double aux ){
	
	   b = aux;
	  }	

void Descobrir  ::  setC (double aux ){
	
	   c = aux;
	  }	

void Descobrir  :: CalculaRaizes () {
	
    if (Delta () < 0) {
		
		cout << "A Equacao Nao Tem Raizes Reais";
		
		}
	
	else {	
		
		cout << "Delta = " << Delta ()                    << "\n" ;
		cout <<	"X1 =    " << (-b + sqrt(Delta ()))/(2*a) << "\n" ;
		cout <<	"X2 =    " << (-b - sqrt(Delta ()))/(2*a) << "\n" ;
		}
	
	}




          // metodo retornar valor

double Descobrir :: getA ()const {
	
	return a;
	}

double Descobrir :: getB ()const {
	
	return b;
	}

double Descobrir :: getC ()const {
	
	return c;
	}


int main () {
	
	class Descobrir obj;
	
	int A,B,C;
	
	do {
	
		cout << "Digite o valor de A  ";
		cin  >> A;
		obj.setA (A);
	
	}while (A == 0);
		
	cout << "Digite o valor de B  ";
	cin  >> B;
	obj.setB (B);
	
	cout << "Digite o valor de C  ";
	cin  >> C;
	obj.setC (C);
		
	   
	
	cout << "\n";
	
	cout << "A =     " << obj.getA () << "\n" ;
	cout << "B =     " << obj.getB () << "\n";
	cout << "C =     " << obj.getC () << "\n";
	obj.CalculaRaizes ();
	}
	


