# include <iostream>
using namespace std;

class Data
	{
		private:
			int dia,mes,ano;
		
		public:
			Data ();
		
			int Bissexto () 
			{
				return ( (ano%4==0 && ano%100) || ano%400==0);	
			}	
	
			void IntData       (int d,int m,int a);//Incializa Dados
			void PrintData     ();//Imprime por Extesso	
			void PrintSigno    ();//Imprime Signo
			void PrintBissexto ();//Imprime Bissexto		
			
	};
	
Data::Data (): dia(1),mes(1),ano(1) //funcao contrutora automatica
	{
		
	}


void Data::IntData       (int d,int m,int a)
	{
		int dmes[] = {0,31,28,31,30,31,30,31,30,31,30,31,30,31};
        
		ano = a > 0  ? a: 1;//valida ano	
		dmes [2] = dmes[2]  + Bissexto ();
		mes = m >= 1 &&   m <= 12         ? m : 1;//valida mes     
		dia = d >= 1 &&   d <= dmes[mes]  ? d : 1 ;//valida dia
	
	} 
void Data::PrintData     () 
	{
		char nome[13][10] =
		{
		"Zero","Janeiro","Fevereiro","Março","Abril","Maio","Junho",
		"Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"
		};
	
	cout << dia <<" de " << nome[mes] << " de " << ano << endl;
	}

void Data::PrintSigno    () 
	{
		char nsigno [14][12] =	
		{
		"Zero","Aries","Touro","Gemeos","Cancer","Leao","Virgem","Libra",		
		"Escorpiao","Sagitario","Capricornio","Aquario","Peixes"	
		};
    
		int sig[] = {0,20,19,20,20,20,20,21,22,22,22,21,21};
		
		if (dia < sig [mes])
			{
			cout << "Signo: " << nsigno[mes] << endl; 	
			}
	    else
			{
			cout << "Signo: " << nsigno[mes + 1] << endl; 	
			}
	}		

void Data::PrintBissexto () 
	{
		if  (Bissexto () )
			cout << "Ano Bissexto" << endl;
		    
		else
	  		cout << "Ano Nao e Bissexto" << endl;
				
	}


int main () 
	{
		Data x,y,z;
			     
		x.IntData (14,6,1992);
		y.IntData (12,1,1976);
		z.IntData (30,7,1978);
				 
		x.PrintData     ();
		y.PrintData     ();
		z.PrintData     ();
	 
  	    x.PrintSigno    ();
		y.PrintSigno    ();
		z.PrintSigno    ();
	    
		x.PrintBissexto ();
		y.PrintBissexto ();
		z.PrintBissexto ();	
	
	
	return 0;
	}   	





