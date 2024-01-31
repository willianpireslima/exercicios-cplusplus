#include <iostream>
using namespace std;

class Tempo {
	
	private:
		int horas, minutos ,segundos;
		
    public:
		bool  validaTempo (int aux);	
		void  setTempo    (int Auxhoras,int Auxminutos , int Auxsegundos);
		void  getTempo             ();
		int   converteTempoSegundos(); 
		void  converteSegundosTempo(int aux1 , int aux2); 
	    
	};
	
bool Tempo ::validaTempo(int aux) {
	
	if (aux  >  -1 && aux <  61 ) {
		
		return true;
		}
	
	return false;
	}

	
void  Tempo :: setTempo    (int Auxhoras,int Auxminutos , int Auxsegundos) {
	
	horas    = Auxhoras;
	minutos  = Auxminutos;
	segundos = Auxsegundos;
	
	}

void Tempo ::  getTempo             () {
	
	
	cout << "Horas    =" << horas    << endl
	     << "Minutos  =" << minutos  << endl
	     << "Segundos =" << segundos << endl;	
	
	}

int Tempo :: converteTempoSegundos() {
	
	
	return ( horas * 3600 ) + ( minutos * 60 ) + segundos;
	}

void Tempo :: converteSegundosTempo(int aux1 , int aux2) {
	
	int SubtracaoTempo = aux1 - aux2;
	
	int H,M,S;
	
	H = SubtracaoTempo / 3600;
	M = SubtracaoTempo % 3600;
	S = M / 60;
	
	cout << H << ":" << M << ":" << S;
	
	}


int main () {
	
	int horas , minutos ,segundos;
	  
	class Tempo A,B,C;
    	  
	 // primeiro
	
	do  {
	  
		cout << "Digite O Valor Das Horas      ";
		cin  >> horas;
	  	  
		}while ( A.validaTempo(horas) == false );
	  
	do  {
	  
		cout << "Digite O Valor Dos Minutos    ";
		cin  >> minutos;
	  	  
		}while ( A.validaTempo(minutos) == false );
	
	do  {
	  
		cout << "Digite O Valor Dos Segundos   ";
		cin  >> segundos;
	  	  
		}while ( A.validaTempo(segundos) == false );
	
	A.setTempo    (horas , minutos , segundos);
	
	cout << "\n";
	
	A.getTempo();
	
    cout << "Total De Segundos =" << A.converteTempoSegundos();
    
	// segundo
	
	cout << "\n\n";
	
	do  {
	  
		cout << "Digite O Valor Das Horas      ";
		cin  >> horas;
	  	  
		}while ( B.validaTempo(horas) == false );
	  
	do  {
	  
		cout << "Digite O Valor Dos Minutos    ";
		cin  >> minutos;
	  	  
		}while ( B.validaTempo(minutos) == false );
	
	do  {
	  
		cout << "Digite O Valor Dos Segundos   ";
		cin  >> segundos;
	  	  
		}while ( B.validaTempo(segundos) == false );
	
	B.setTempo    (horas , minutos , segundos);
	
	cout << "\n";
	
	B.getTempo();
	
	cout << "Total De Segundos =" << B.converteTempoSegundos();
	
	cout << "\n";
	
	cout << "Diferença entre os Tempos = ";
	C.converteSegundosTempo( A.converteTempoSegundos () ,
							 B.converteTempoSegundos () );
	
	

	
	
	}
 		 	
	
	
	
	