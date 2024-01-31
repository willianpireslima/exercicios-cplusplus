
/*
- Uma agenda de contatos de um celular normalmente pode armazenar até 256 contatos. Cada objeto do tipo
Contato tem um nome, um telefone e um e-mail. A class Contato deve conter os códigos para manipulação das
informações, ou seja, as funções membro: setContato(), modificarContato(), buscarContato() e getContato(). Faça um
programa em C++ para implementar uma agenda. A classe Agenda, que contém um vetor de registros do tipo Contato
para armazenar até 256 contatos e uma variável para controlar a ocupação deste vetor. A classe Agenda deverá ter as
seguintes funções membros: setContato(), getContato(), excluirContato(), buscarContato() e modificarContato().
O programa deve fornecer na função principal um menu de escolhas com as seguintes opções:
1. Para Inserir Contato.
2. Para Excluir Contato.
3. Para Buscar Contato.
4. Para Modificar Contato
*/
#include <iostream>
#include <math.h>
using namespace std;

class Contato  {
	
	public:
	string  Nome,Telefone,Email;
	
	void setNome      (string aux );
	void setTelefone  (string aux);
	void setEmail     (string aux);
	
	string getNome     ();
	string getTelefone ();
	string getEmail    ();
	
	
	};

// metodos receber valores

void Contato   :: setNome      (string aux ) {
	
	Nome = aux;
	}


void Contato   :: setTelefone  (string aux) {
	
	Telefone = aux;
	}
void Contato   :: setEmail     (string aux) {
	
	Email = aux;
	}
	
// metodos retornar valores

string Contato :: getNome      () {
	
	return Nome ;
	}

string Contato :: getTelefone  () {
	
	return Telefone;
	}


string Contato :: getEmail     () {

	return Email;
	}

class Agenda  {
	
	public:
	
	class Contato Vetor[256];
	int   Ocupacao;
	
	void    InserirContato   (string AuxNome,string AuxTelefone,string AuxEmail);
	void    MostrarContato    ();
    string  BuscarContato     (string AuxBuscar);
	bool    ModificarContato  (string AuxAntigo,string AuxNome,string AuxTelefone,string AuxEmail);
    bool    ExcluirContato    (string AuxNome);
	
	Agenda ();
	
	};

Agenda :: Agenda () {
	
	Ocupacao = 0;
	
	}

void  Agenda ::  InserirContato   (string AuxNome,string AuxTelefone,string AuxEmail) {
	
	Vetor[Ocupacao].setNome      (AuxNome);
    Vetor[Ocupacao].setTelefone  (AuxTelefone);
	Vetor[Ocupacao].setEmail     (AuxEmail);
	
	Ocupacao++;
	}


void Agenda ::   MostrarContato    () {
	
	string mostrar;
	
	mostrar =            Vetor[Ocupacao].getNome ();
	mostrar =  mostrar + "\n";
	mostrar =  mostrar + Vetor[Ocupacao].getTelefone ();
	mostrar =  mostrar + "\n";
	mostrar	=  mostrar + Vetor[Ocupacao].getEmail    ();	
			
	cout << mostrar ;
	
	}

string Agenda :: BuscarContato     (string AuxBuscar) {
	
	string Buscar = "Contato Nao Existente";
	
	for (int i = 0; i < Ocupacao && Vetor[i].getNome () != AuxBuscar  ; i++) {
		
		if (Vetor[i].getNome () == AuxBuscar) {
			
			Buscar =          Vetor[i].getNome ();
            Buscar = Buscar + "\n";
			Buscar = Buscar + Vetor[i].getTelefone ();
            Buscar = Buscar + "\n";
			Buscar = Buscar + Vetor[i].getEmail    ();	
			}

		}	
	
	return Buscar;
	}


bool Agenda :: ModificarContato  (string AuxAntigo,string AuxNome,string AuxTelefone,string AuxEmail) {
	
	
	for (int i = 0; i < Ocupacao ; i++) {
		
		if (Vetor[i].getNome () == AuxAntigo) {
			
		Vetor[i].setNome      (AuxNome);
		Vetor[i].setTelefone  (AuxTelefone);
		Vetor[i].setEmail     (AuxEmail);
		
		return true;
		}
		
   }	
	
return false;
}


 bool Agenda ::   ExcluirContato    (string AuxNome) {
	  
	int indiceContatoExcluido,i; 
	bool sinal =false;
	
	 for (i = 0; i < Ocupacao; i++) {
		
		if (AuxNome == Vetor[i].getNome ()) {
			indiceContatoExcluido =i;
			sinal =true;
		}
		
   }	
	
    i=indiceContatoExcluido;
	while (i < Ocupacao ) {
		   Vetor[i] = Vetor[i+1];
		   i++;
	}
	 


	Ocupacao = Ocupacao - 1;
	
    return sinal;
	}





int main () {
	
	class Agenda Obj;
	
	int opcao;
	
	string  nome,telefone,email;
	
	cout << "Digite a Sua Opcao"        << endl;
	cout <<	"1. Para Inserir Contato"   << endl;
	cout << "2. Para Excluir Contato"   << endl;
	cout << "3. Para Buscar Contato"    << endl;
	cout << "4. Para Modificar Contato" << endl;
    cin  >> opcao;
  
	
	
	switch (opcao) {
	
		case 1:
			cout << "Digite os Dados" << endl;
			cout <<	"Nome"            << endl;
			cin  >>nome;
			cout << "Telefone"        << endl;
			cin  >>telefone;
			cout << "Email"           << endl;
			cin  >>email;
			
			Obj.InserirContato(nome,telefone,email);
			break;
		
	case 2:	
    	   cout <<"Digite o Nome Do Contato"  << endl;
           cin  >>nome;
		   
		   
		   if (Obj.ExcluirContato(nome)  == true) {
			   
  	          cout <<"Contato Excluido"  << endl;
			  }
			  else
			  	  {
				  cout <<"Contato nao existe"  << endl;
			  	  }
		
		
		case 3:
			cout <<	"Nome"            << endl;
			cin  >>nome;
			
			cout << Obj.BuscarContato (nome);
			 
			break;
		case 4:
			string antigonome;
			
			cout <<"Digite o Nome Do Antigo Contato"  << endl;
			cin  >>antigonome;
			cout << "Digite os Novos Dados" << endl;
			cout <<	"Nome"            << endl;
			cin  >>nome;
			cout << "Telefone"        << endl;
			cin  >>telefone;
			cout << "Email"           << endl;
			cin  >>email;
			Obj.ModificarContato  (antigonome,nome,telefone,email);	
			
   	  	  };
	
	
	}
