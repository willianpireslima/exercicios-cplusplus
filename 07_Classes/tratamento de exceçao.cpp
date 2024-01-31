# include <iostream>
#include <exception>
using namespace std;


class Calculadora  {
	
	private:
		double v1,v2;
		
	public:
		Calculadora () {v1 = 0; v2 = 1;}
		
		
		void setV1   (double aux);
		void setV2   (double aux);
	
		double getV1 ();
		double getV2 ();
	
		double  soma        ();
		double  subtrai     ();
		double  multiplica  ();
		double  divide      ();
	
	};


void Calculadora ::   setV1   (double aux) {
	
	v1 = aux;
	}
void Calculadora ::   setV2   (double aux) {
	
	v2 = aux;
	}
	
double Calculadora :: getV1  () {
	
	return v1;
	}

double Calculadora :: getV2  () {
	
	 return v2;
	}
	

double Calculadora ::  soma        () {
	
	return v1+v2;
	}

double Calculadora ::  subtrai     () {
	
	return v1-v2;
	}

double Calculadora ::  multiplica  () {
	
	return v1*v2;
	}

double Calculadora ::  divide      () {
	
	
	if (v2 == 0.0) {
		
		throw 1;
		} 
	 
	
	return (v1/v2);
	}


//class TestaCalculadora  {
	
//	private:
//		Calculadora obj;
	
//	public:
//		void menu ();
	
//	};

//void menu () {
	
	

	
	
	
//	}





int main () {
	
	float a,b;
	int op;
	
	class Calculadora obj;
	
	do
		{
		cout << "Digite      " << endl;
		cout << "1 soma      " << endl;
		cout << "2 subtrai   " << endl;
		cout << "3 multplica " << endl;
		cout << "4 divide    " << endl;
		cout << "5 Encerra   " << endl;
		cin  >> op;
		
		cout << "Digite os valores";
		cin  >> a >> b;
		
		obj.setV1   (a);
		obj.setV2   (b);
		
		switch (op) {
			
			case 1:
				cout << "resultado" << obj.soma        ();
			
			case 2:
				cout << "resultado" <<  obj.subtrai     ();
			
			case 3:
				cout << "resultado" <<  obj.multiplica  ();
			
			case 4:
				
				try {
					cout << "resultado" <<  obj.divide      ();
					}
				
				catch (int aux) {
					
					if (aux == 1) {
						
						cout << "Divisao por zero";
						}
					else
						cout << "erro desconhecido";
					
					}
				
			
			
			}
		
		} while (op != 5);
	
	
	
	
	
	
	//TestaCalculadora obj;
	
	//obj.menu ();
	
	}
