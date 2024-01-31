#include <iostream>
#include <math.h>
using namespace std;

class Aluno  {
	
	private:
		string Matricula ,Nome;
		int Presenca;
		double A1,A2,A3,A4;
	
	public:
		void setMatricula (string aux);
		void setNome      (string aux);
		void setPresenca  (int aux);
		void setA1        (double aux);
		void setA2        (double aux);
		void setA3        (double aux);
		void setA4        (double aux);
	
    	string getMatricula ();
		string getNome      ();
		int    getPresenca  ();
		double getA1        ();
		double getA2        ();
		double getA3        ();
		double getA4        ();
	
		double	calculaN1         ();
		double	calculaN2         (); 
		double	calculaMF         ();
		string	determinaSituacao ();
	};
	

// metodo de alteracao	
void Aluno:: setMatricula (string aux) {
	
	Matricula = aux;
	}
void Aluno:: setNome      (string aux) {

	Nome = aux;	
	}
void Aluno:: setPresenca  (int aux)    {

	Presenca= aux;	
	}
void Aluno:: setA1        (double aux) {

	A1 = aux;	
	}
void Aluno:: setA2        (double aux) {

	A2 = aux;	
	}
void Aluno:: setA3        (double aux) {
	
	A3 = aux;	
	}
void Aluno:: setA4        (double aux) {
	
	A4 = aux;	
	}

// metodos de retorno

string Aluno:: getMatricula () {

	return Matricula;	
	}
string Aluno:: getNome      () {

	return Nome;		
	}

int  Aluno::   getPresenca  () {

	return Presenca;		
	}

double Aluno:: getA1        () {

	return A1;
	}

double Aluno:: getA2        () {

	return A2;	
	}

double Aluno:: getA3        () {

	return A3;	
	}


double Aluno:: getA4        () {

	return A4;
	}


// metodo para retirar conclusoes apartir dos resultados

double Aluno:: calculaN1         () {
	
	double N1 = (A1 + A2) / 2;
	
	return N1;	
	}

double Aluno:: calculaN2         () {
	
	double N2 = (A3 + A4) / 2;
	
	return N2;
	}

double Aluno:: calculaMF         () {
	
	double MF = 0.4 * calculaN1 ()  +  0.6 * calculaN2 () ;
	
	return MF;
	}

string Aluno:: determinaSituacao () {
	
	string situacao;
	 
	 if ( ( calculaMF ()  >  4.9 ) && ((Presenca/80) * 100) >75  ) {
		 
 	 	 situacao = "A";
		}
    else
        {
	  	situacao = "R";	
  	    }
	
	return situacao;
	}


class Turma {
	
	public:
		int TotalDeAlunos;
		class Aluno VetorAluno[60];
		
		int    setTotalDeAlunos (int aux );
		int    getTotalDeAlunos ();
		
		void   obterAlunos                    ();
		void   apurarN1_N2_MF_Situacao_Alunos (); 
		void   mostrarAlunos                  ();
		int    determinarQdeAlunosAprovados   ();
		double calcularNotaMediaTurma         ();	
	
	
	};

// metodos para determinar quantia de alunos

int  Turma ::  setTotalDeAlunos (int aux ) {
	
	int valor;
	
	if (aux > 1 && aux < 61) {
		
		TotalDeAlunos = aux;
		valor = 1;
		}
	else
		{
		valor = 0;
		}
	
	return valor;
	}


int  Turma ::  getTotalDeAlunos () {
	
	return TotalDeAlunos;
	}




void Turma :: obterAlunos                 () {
	
	string matricula ,nome;
	int presenca;
	double a1,a2,a3,a4;	
	int i;
	
	for (i = 0; i < TotalDeAlunos; i++) {
	
		cout << "Digite Os Dados Aluno" << endl;
		
		cout << "Digite A Matricula             ";
		cin  >> matricula;
		VetorAluno[i].setMatricula (matricula);
		
		cout << "Digite O Nome Do Aluno         ";
		cin  >> nome;
		VetorAluno[i].setNome      (nome);
		
		cout << "Digite O Total de Prensencas   ";
		cin  >> presenca;
		VetorAluno[i].setPresenca  (presenca);
		
		cout << "Digite A Primeira Nota         ";
		cin  >> a1;
		VetorAluno[i].setA1        (a1);
		
		cout << "Digite A Segunda  Nota         ";
		cin  >> a2;
		VetorAluno[i].setA2        (a2);
		
		cout << "Digite A Terceira Nota         ";
		cin  >> a3;
		VetorAluno[i].setA3        (a3);
		
		cout << "Digite A Quarta   Nota         ";
		cin  >> a4;
		VetorAluno[i].setA4        (a4);
	
		cout <<"\n";
		
		cout << "Matricula           = " << VetorAluno[i].getMatricula() << endl
			 << "Nome Do Aluno       = " << VetorAluno[i].getNome     () << endl
			 << "Total de Prensencas = " << VetorAluno[i].getPresenca () << endl
			 << "Primeira Nota       = " << VetorAluno[i].getA1       () << endl
    		 << "Segunda  Nota       = " << VetorAluno[i].getA2       () << endl
    		 << "Terceira Nota       = " << VetorAluno[i].getA3       () << endl
    		 << "Quarta   Nota       = " << VetorAluno[i].getA4       () << endl
			 << "N1                  = " << VetorAluno[i].calculaN1   () << endl
			 << "N2                  = " << VetorAluno[i].calculaN2   ()  << endl
			 << "Media Final         = " << VetorAluno[i].calculaMF   () << endl
			 << "Resultado Final     = " << VetorAluno[i].determinaSituacao ()<< endl;
		
		   cout <<"\n";
        }	   	
	
	
	}

void Turma ::  mostrarAlunos    () {
	
	cout << "Ordem" 
		 << "\t" 
		 << "Matricula"
		 << "\t" 
		 << "Nome"
		 << "\t" 
		 << "Pres"
		 << "\t" 
		 << "A1" 
		 << "\t" 
		 << "A2" 
		 << "\t" 
		 << "A3"
		 << "\t" 
		 << "A4" 
		 << "\t" 
		 << "N1" 
		 << "\t" 
		 << "N2" 
		 << "\t" 
		 << "MF" 
		 << "\t" 
		 << "Situacao";
	
	cout << "\n"; 	 
	
	for (int i = 0; i < TotalDeAlunos; i++) {
	
		cout << i+1
			 << "\t" 
			 << VetorAluno[i].getMatricula      ()
			 << "\t" 
			 << VetorAluno[i].getNome           ()
			 << "\t" 
			 << VetorAluno[i].getPresenca       ()
			 << "\t" 
			 <<  VetorAluno[i].getA1            ()
			 << "\t" 
			 << VetorAluno[i].getA2             () 
			 << "\t" 
			 << VetorAluno[i].getA3             ()
			 << "\t" 
			 <<  VetorAluno[i].getA4            ()
			 << "\t" 
			 <<  VetorAluno[i].calculaN1        ()
			 << "\t" 
			 << VetorAluno[i].calculaN2         () 
			 << "\t" 
			 << VetorAluno[i].calculaMF         ()
			 << "\t" 
			 << VetorAluno[i].determinaSituacao ();
		
		cout << "\n"; 	 
		}
	
	
	
	}


int    Turma :: determinarQdeAlunosAprovados   () {
	
	int TotalDeAprovados,i;
	
	TotalDeAprovados = 0;
	
	for (i = 0; i < TotalDeAlunos; i++) {
		
		if ( VetorAluno[i].determinaSituacao () == "A" ) {
			
			TotalDeAprovados++;
			}	
		}
		 	
	
	return TotalDeAprovados;
	}

double Turma :: calcularNotaMediaTurma         () {
	
	double NotaMediaTurma;
	
	 
	 NotaMediaTurma = 0;
	 
	 for (int i = 0; i < TotalDeAlunos; i++) {
		
	
		 NotaMediaTurma = NotaMediaTurma + VetorAluno[i].calculaMF   ();
		}
    
	return  NotaMediaTurma / TotalDeAlunos;
	}	   	


int main () {
	
	int Quantia;
	class Turma Obj;
	
	do {
		
		cout << "Digite A Quantidade De Alunos   ";
		cin  >> Quantia;
		
		}while (Obj.setTotalDeAlunos (Quantia) !=1);
		
	cout << "Numero de Alunos = " <<Obj.getTotalDeAlunos() << "\n\n";
	
	Obj.obterAlunos                    (); 
	Obj.mostrarAlunos                  ();
	
	
	cout << "Quantidade De Aprovados" << Obj.determinarQdeAlunosAprovados   () << endl;
	cout << "Media Da Turma"          << Obj.calcularNotaMediaTurma         () << endl;	
	}



		