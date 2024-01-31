#include <iostream>
using namespace std;


class fracao {
	
	private:
		int n,d;
		int mdc ()const;
        void reduz (); //simplica a fraçao
	public:

		void setN (int aux);
		bool setD (int aux) ;//D !=0;
		
		int  getN ()const;
		int  getD ()const;
	
		int mmc (int valor1,int valor2);
	    
	    void Soma          (int Num1,int Dem1,int Num2,int Dem2);
		void Subtracao     (int Num1,int Dem1,int Num2,int Dem2);
		void Multiplicacao (int Num1,int Dem1,int Num2,int Dem2);
	    void Divisao       (int Num1,int Dem1,int Num2,int Dem2);
	
	};
	
// nominador	


void  fracao :: setN (int aux) {
    	
	n = aux;
	}	
	

int   fracao :: getN ()const {
    	
	return n;
	}	

// denominador

	
bool fracao :: setD (int aux) {
	
	if (aux !=0) {
	
		d = aux;
	
		return true;
		}
	
	return false;
	}		
    

int fracao :: getD () const	{
	
	return d;
	}
	
	
// mdc	

int fracao :: mdc ()const {
	
	int Resto,Valor1,Valor2;
	
	
	Valor1 = n;
	Valor2 = d;
	Resto  = Valor1 % Valor2;
	
	while (Resto != 0) {
		
		Valor1 = Valor2;
		
		Valor2 = Resto;
		
		Resto  = Valor1 % Valor2;
		
		}
	
	return Valor2;
	
	}

// mmc

int fracao :: mmc (int Valor1,int Valor2) {
	
	
	int staticValor1,staticValor2,Resto,MDC;
	
	staticValor1 = Valor1;
	staticValor2 = Valor2;
	
	Resto  = Valor1 % Valor2;
	
	while (Resto != 0) {
		
		Valor1 = Valor2;
		
		Valor2 = Resto;
		
		Resto  = Valor1 % Valor2;
		
	}
	
	MDC = Valor2;
	
	return ( staticValor1 * staticValor2 ) / MDC;
	
	}



void fracao :: Soma (int Num1,int Dem1,int Num2,int Dem2) {
	
	class fracao A,B,C;
	
	A.setN (Num1);
	A.setD (Dem1);
	
	B.setN (Num2);
	B.setD (Dem2);
	
	
	
	int aux1,aux2;
	
	// aux1 Resulta No Denominador Das Fracoes 
	// aux2 Resulta No Nominador   Das Fracoes
	
	aux1 = mmc (Dem1,Dem2); 
	C.setD (aux1);
	
	aux2 = ( aux1 / A.getD ()  * A.getN () )+
	       ( aux1 / B.getD ()  * B.getN () );
	
	C.setN (aux2);
	

	C.reduz ();
	
	}

void fracao :: Subtracao (int Num1,int Dem1,int Num2,int Dem2) {
	
	class fracao A,B,C;
	
	A.setN (Num1);
	A.setD (Dem1);
	
	B.setN (Num2);
	B.setD (Dem2);
	
	;
	
	int aux1,aux2;
	
	// aux1 Resulta No Denominador Das Fracoes 
	// aux2 Resulta No Nominador   Das Fracoes
	
	aux1 = mmc (Dem1,Dem2); 
	C.setD (aux1);
	
	aux2 = ( aux1 / A.getD ()  * A.getN () ) -
	       ( aux1 / B.getD ()  * B.getN () );
	
	C.setN (aux2);
	

	C.reduz ();
		
	}

void fracao :: Multiplicacao (int Num1,int Dem1,int Num2,int Dem2) {
	
	class fracao A,B,C;
	
	A.setN (Num1);
	A.setD (Dem1);
	
	B.setN (Num2);
	B.setD (Dem2);
	
	;
	
	int aux1,aux2;
	
	// aux1 Resulta No Denominador Das Fracoes 
	// aux2 Resulta No Nominador   Das Fracoes
	
	aux1 = Dem1 * Dem2; 
	C.setD (aux1);
	
	aux2 = Num1 * Num2;
	      
	C.setN (aux2);
	

	reduz ();
	
	
	
	}



void fracao :: Divisao  (int Num1,int Dem1,int Num2,int Dem2) {
	
	
	class fracao A,B,C;
	
	A.setN (Num1);
	A.setD (Dem1);
	
	B.setN (Num2);
	B.setD (Dem2);
	
	;
	
	int aux1,aux2;
	
	// aux1 Resulta No Denominador Das Fracoes 
	// aux2 Resulta No Nominador   Das Fracoes
	
	aux1 = Dem1 * Num2; 
	C.setD (aux1);
	
	aux2 = Num1 * Dem2 ;
	      
	C.setN (aux2);
	
	C.reduz ();	
	}




// REDUZ
	
void fracao :: reduz () {
	
	int MDC =  mdc ();
	
	n=n/MDC;
	d=d/MDC;
	
	
	cout << n << " / " << d;
	}	


int main () {
	
	class fracao a,b,c;
	
	int nominador,denominador;
	
	cout << "Digite O Nominador   Da Primeira Fracao      ";
	cin  >> nominador;
	
	a.setN (nominador);
	
	do{
		
	cout << "Digite O Denominador Da Primeira Fracao      ";
	cin  >> denominador;
		
		}while( a.setD (denominador) == false );
		
    cout << "\n";
	
	cout << "Digite O Nominador   Da Segunda Fracao       ";
	cin  >> nominador;
	
	b.setN (nominador);
	
	do{
		
		cout << "Digite O Denominador Da Segunda Fracao       ";
		cin  >> denominador;
		
		}while( b.setD (denominador) == false );
		
	 cout << "\n";
	
	int opcao;
	
	cout << "Digite a Opcao Desejada" << endl
	     << "1 Soma"                  << endl
         << "2 Subtracao"             << endl
         << "3 Multiplicao"           << endl
         << "4 Divisao"               << endl;
	cin  >> opcao;
	
	switch ( opcao ) {
		
		case 1:
			cout << "Soma = "; 
			
			c.Soma ( a.getN (),a.getD (),
				     b.getN (),a.getD () );
		    break;
		
		case 2:
            cout << "Subtracao = "; 
			
			c.Subtracao     (a.getN (),a.getD (),
							 b.getN (),a.getD () );
			 break;                       
		
	    case 3:
			cout << "Multiplicacao = ";
			
			c.Multiplicacao  ( a.getN (),a.getD (),
                               b.getN (),a.getD () );
		
		    break;

        case 4:	
  	    	cout << "Multiplicacao = ";
			 
			c.Divisao      ( a.getN (),a.getD (),
							 b.getN (),a.getD () ); 		
	
        }
		
    }															  