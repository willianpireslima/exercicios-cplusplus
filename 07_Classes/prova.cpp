#include <iostream>
using namespace std;

class Aluno {
	
	private:
		string Nome;
		double Peso;
		double Altura;
	
	
	public:
		void   setNome    (string aux);
		string getNome    ();
	
		void   setPeso    (double aux);
		double getPeso    ();
	
		void   setAltura  (double aux);
		double getAltura  ();
	
		double calculaIMC            (); 
		string DeterminaFaixaDeRisco ();
	
	};

// metodos da classe aluno


// nome

void  Aluno:: setNome    (string aux) {
	
	
	Nome = aux;
	}

string Aluno:: getNome    () {
	
	return Nome;
	}

// peso

void  Aluno:: setPeso    (double aux) {
	
	Peso = aux;
	}

double Aluno:: getPeso    () {
	
	return Peso;
	}

// altura

void  Aluno:: setAltura  (double aux) {
	
	
	Altura = aux;
	}

double Aluno:: getAltura  () {
	
	return Altura;
	}

// imc

double  Aluno:: calculaIMC    () {
	
	
	return Peso / (Altura*Altura);
	}


// retornando a faixa

string Aluno:: DeterminaFaixaDeRisco () {
	
	string faixa;
	
	if (calculaIMC    () < 20 ) {
		
		faixa = "Abaixo Do Peso Normal";
		}
        	
	else{
		 
		 if (calculaIMC    () > 19 && calculaIMC    () < 26) {
		
			faixa = "Peso Normal";
			}
		 
			else{	
		 
				if (calculaIMC    () > 25 && calculaIMC    () < 31) {
		
					faixa = "Excesso De Peso";
					}
					else{	
		 
						 if (calculaIMC    () > 30 && calculaIMC    () < 35) {
		
							faixa = "Obesidade";
							}
						    else{	
		 
									if (calculaIMC    () > 35) {
		
										faixa = "Obesidade Morbida";
										}
								}						
						
						}		
				}
		}
	
	return faixa;
	}
	


class Turma {
	
	class Aluno Obj;
	
	public:
		void   setAluno      (string auxNome, double auxPeso , double auxAltura);
		void   getAluno      ();
	
	
	};


// enviando para o aluno
	
void  Turma ::  setAluno      (string auxNome, double auxPeso , double auxAltura) {
	
	Obj.setNome    (auxNome);
	Obj.setPeso    (auxPeso);
	Obj.setAltura  (auxAltura);
	}

void  Turma ::  getAluno      () {
	
	cout << "Nome           =" << Obj. getNome              () << endl;
	cout << "Peso           =" << Obj. getPeso              () << endl;
	cout << "Altura         =" << Obj. getAltura  		    () << endl;
	cout << "IMC            =" << Obj. calculaIMC           () << endl;
	cout << "FaixaDe Risico =" << Obj.DeterminaFaixaDeRisco () << endl; 
	}


class MenuTurma {
	
	
	public:
		void ObterAlunos   ();
		void MostrarAlunos ();
	
	};

void MenuTurma:: ObterAlunos   () {
	
	int Tamanho,i;
	
	cout << "Digite A Quantidade De Alunos  ";
	cin  >> Tamanho;
	
	class Turma Obj[Tamanho];
	
	string nome;
	
	double peso,altura;
	
	
	cout << "\n";
	
	for (i=0 ; i<Tamanho ; i++) {
	
		cout << "Digite O Nome   Do Aluno  ";
		cin  >> nome;
		cout << "Digite O Peso   Do Aluno  ";
		cin  >> peso;
		cout << "Digite A Altura Do Aluno  ";
		cin  >> altura;
	
		Obj[i].setAluno      (nome, peso , altura );
		
		cout << "\n";
		}
	
	
	for (i=0 ; i<Tamanho ; i++) {
	
		Obj[i].getAluno      (); 
		cout << "\n";
		}
	}


int main () {
	
	
	class MenuTurma Obj;
    
	Obj.ObterAlunos   ();
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	