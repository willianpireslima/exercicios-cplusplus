#include <iostream>
#include <math.h>
using namespace std;

namespace TP1 {

	class Ponto  {
	
		private:
			double X,Y;
	
		public:	
			void setX (double X1,double X2);
			void setY (double Y1,double Y2);	
			
			double getX  ();
			double getY  ();
			
			double CalculaDistanciaAB	(); 
	
		};
	}
	
// Receber

namespace TP1 {	

	void Ponto :: setX (double X1,double X2) {
	
		X = X1 - X2;
		}
	
	void Ponto :: setY (double Y1,double Y2) {
	
		Y = Y1 - Y2;
		}

//Retornar
	
	double Ponto :: getX () {
	
		return X;
		}

	double Ponto :: getY () {
	
		return Y;
		}

	
	double Ponto ::  CalculaDistanciaAB	() {
	
	double D;
	
	D = sqrt( ( X*X + Y*Y ) );
	
		
	return D;
	}
	
	
	
	}
		



class testaponto {
	
	public:
		void Interface ();
		
	};

void testaponto :: Interface () {
	
	double X1,Y1,X2,Y2;
	
 	TP1 :: Ponto Obj;
	
	cout << "Digite As Cordenadas Do Primeiro Ponto" << endl;
	cout << "Digite o x1   ";
	cin  >> X1;
	cout << "Digite o y1   ";
	cin  >> Y1;
	
	
	cout << "\n";
	
	cout << "Digite As Cordenadas Do Segundo Ponto" << endl;
	cout << "Digite o x2   ";
	cin  >> X2;
	cout << "Digite o y2   ";
	cin  >> Y2;
	
	cout << "\n" ;
	
	Obj.setX (X1,X2);
	Obj.setY (Y1,Y2);	
			
	cout << "X         = " << Obj.getX  () << endl;
	cout << "Y         = " << Obj.getY  () << endl;
	cout << "Distancia = " << Obj.getY  () << endl;
	
	
	
	
	}




int main ()  {
	
	class testaponto obj;
	
	obj.Interface ();
	}
	
//# iclude "ponto.h"	
//using namespace TP1 ;


// main.cpp
//# include testaponto.h








