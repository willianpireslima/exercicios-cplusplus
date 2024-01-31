# include <iostream>
# include <math.h>
using namespace std;
	
	

class Triangulo {
	
	private:
		double a,b,c;
	
	public:
	
	void   setA (double aux);
	void   setB (double aux);	
	void   setC (double aux);
	
	double getA ();
	double getB ();
	double getC ();
	
	double AreaDoTriangulo ();
	
	string ClassificacaoDeTriangulos ();
	string ClassificacaoDeAngulos    ();
	};


// Lado A

void   Triangulo ::  setA (double aux) {
	
	a = aux;
	}

double Triangulo ::  getA () {
	
	return a;
	}


// Lado B

void Triangulo :: setB (double aux) {
	
	b = aux;
	}

double Triangulo :: getB () {
	
	return b;
	}


// Lado C

void  Triangulo ::  setC (double aux) {
	
	c = aux;
	}

double Triangulo ::  getC () {
	
	return c;
	}


double Triangulo :: AreaDoTriangulo () {
	
	double sp;
	
	sp=(a+b+c)/2.0;	
	
	return sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	}



string Triangulo :: ClassificacaoDeTriangulos () {
	
	if ( a==b && b == c && c == a) {
		
		return "Triangulo Equilatero";
		}
	
	else 
		{
		
		if ( a == b || b == c || c == a  ) {
		
			return "Triangulo Equilatero";
			}
        	else 
				{
				return	"Triangulo escaleno";
				}
		
		}	   	

	}



string Triangulo :: ClassificacaoDeAngulos    () {
	
	if ( a*a < ( b*b + c*c ) ||  
		 b*b < ( a*a + c*c ) ||  
		 c*c < ( b*b + a*a )   )
		
		{
		return "Acutangulo";
		}
	
	else 
		{
		
		if ( a*a > ( b*b + c*c )  || 
			 b*b  < ( a*a + c*c ) ||  
		     c*c  < ( b*b + a*a )   )
			
			{
			return "Obtusangulo";
			}
        	
			else 
				{
				return "Retangulo";	
				}
		
		}
	
	
	}



// prototipo de funcao

int CondicaoDeExistenciaDoTriangulo (int a,int b,int c);


// funcao

int CondicaoDeExistenciaDoTriangulo (int a,int b,int c) {
	
	
	if  (  ( b - c  < a  &&  a < b + c ) &&
           ( a - c  < b  &&  b < a + c ) &&
           ( a - b  < c  &&  c < a + b )   )
		
		{
			   	
		return 1;
		}   
         
	else 
		{
		return 0;
        }	
       
	}


// funcao principal

int main () {
	
	   class Triangulo Obj;
	   
	   int a,b,c;
	   
	   do {
	   
	   	   cout << "Digite Os Lados Do Triangulo";
	   	   cout << "\nDigite O Primeiro Lado ";
	   	   cin  >> a;
	   	   Obj.setA (a);
           
		   cout << "\nDigite O Segundo  Lado ";
	   	   cin  >> b;
	   	   Obj.setB (b);
			  
           cout << "\nDigite O Terceiro Lado ";
	   	   cin  >> c ;
	       Obj.setC (c);
		  
		  }while (CondicaoDeExistenciaDoTriangulo (a,b,c) == 0);
	  
	  cout << "\n";
	  
	  cout << "A      =  " << Obj.getA            () << "\n";
	  cout << "B      =  " << Obj.getB            () << "\n";
	  cout << "C      =  " << Obj.getC            () << "\n";
	  cout << "Area   =  " << Obj.AreaDoTriangulo () << "\n";
	  cout << "Tipo   =  " << Obj.ClassificacaoDeTriangulos () << "\n";
	  cout << "Angulo =  " << Obj.ClassificacaoDeAngulos    () << "\n";
	  
	  
	  
	  
	  }	