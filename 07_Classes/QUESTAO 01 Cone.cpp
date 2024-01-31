#include <iostream>
#include <math.h>
using namespace std;

class Cone  {
	
	private:
		double raio,altura;
	    double geratriz ();
	
	public:
		void   setRaio     (double aux); 
		void   setAltura   (double aux);
		
		double getRaio     ()const; 
		double getAltura   ()const;
		
		double AreaLateral ();
	    double AreaTotal   ();
	    double Volume      ();
	};
	
// metodo de alteracao	

void Cone ::  setRaio    (double aux) {
	
	raio = aux;
	} 

void Cone ::  setAltura  (double aux) {
	
	altura = aux;
	
	}

// metodos que nao alteram


double Cone ::  getRaio    ()const {
	
	return raio;
	} 

double Cone ::  getAltura  ()const {
	
	return altura;
	
	}

double Cone :: geratriz () {
	
	return (sqrt((altura*altura)+(raio*raio)));
	}


double Cone ::  AreaLateral () {
		
	return 	(3.14*raio*geratriz ());
	} 


double Cone ::  AreaTotal  () {
	
	return 	(3.14*raio*(geratriz()+raio));
	}

double Cone ::  Volume     ()   {


	return (1.0/3.0*3.14*raio*raio*altura);
	}



int main () {
	
	Cone Obj;

	
	double  RAIO,ALTURA;
	
	do {
	
		cout << "Digite O Valor Do Raio   ";
		cin  >> RAIO;
    	Obj.setRaio(RAIO);
 	
		cout << "Digite O Valor Da Altura ";
		cin  >> ALTURA;
		Obj.setAltura(ALTURA);
	
		}while(RAIO < 0 || ALTURA < 0);

			
	cout << "\n";
	
	cout << "Altura       = " << Obj.getRaio     () << "\n";
	cout << "Raio         = " << Obj.getAltura   () << "\n";
	cout << "Area Lateral = " << Obj.AreaLateral () << "\n";
	cout << "Area Total   = " << Obj.AreaTotal   () << "\n";
	cout << "Volume       = " << Obj.Volume      () << "\n";
	
	}





		