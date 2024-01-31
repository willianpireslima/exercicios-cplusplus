#include <iostream>
#include<math.h>
using namespace std;

class Contatos {

private:
	int Id;
public:
	void setId(int aux);
	int getId ();
	Contatos ();
};

Contatos::Contatos () {
	Id = 0;
}

void Contatos::setId(int aux) {
Id = aux;	
}

int Contatos:: getId () {
return Id;	
}

class Agenda {
	private:
		//Vetor de Contatos é o indice dos contato que vao sendo armazenados
		Contatos VetorId[256];
		int indiceId;
	public:
		string setContato      (int aux); 
		void getContato      (); 
		string buscarContato   (int aux);
		string modificarContato(int antigoContato , int novoContato);
		string excluirContato  (int aux); 
		
		Agenda ();	
};

Agenda ::Agenda () {

	indiceId = 0;	  		
	
}

string Agenda::setContato(int aux) {
	
	VetorId[indiceId].setId(aux);
	indiceId++;	
return "Contato Adcionado";
}

void Agenda:: getContato      () {
	
	cout << "\n";
	// Percorre o vetor de contatos
	for (int i=0; i < indiceId; i++) {
	cout << VetorId[i].getId() << "  ";	
	}
	cout << "\n";
}

string Agenda::  buscarContato(int aux) {
	
	string modif = "Contato Nao Encontrado";
	
	//Percorre o vetor de contatos
	//Se for igual ao parametro uma mensagem acionada
	for (int i=0; i < indiceId; i++) {
	
		if (aux == VetorId[i].getId()) {
			modif = "Contato Encontrado";	
		}
	}
		
return modif;	
}

string Agenda:: modificarContato(int antigoContato , int novoContato) {
	
	string modif = "Contato Nao Encontrado";
	
	//Percorre o vetor de contatos
	//Se for igual ao parametro uma mensagem acionada
	//O Antigo Contato sera substituido Pelo Novo
	for (int i=0; i < indiceId; i++) {
	
		if (antigoContato == VetorId[i].getId()) {
			VetorId[i].setId(novoContato);
			modif = "Contato Modificado";	
		}
	}
		
return modif;	
}

string Agenda:: excluirContato  (int aux) {
	
	string exclu = "Contato Nao Encontrado";
	int indiceContatoExcluido,i;
	
     //Percorre o vetor de contatos
	//Se for igual ao parametro uma mensagem acionada
	//O  indice do do contato a sera excluido sera armazenado
	for (i=0; i < indiceId; i++) {
	
		if (aux == VetorId[i].getId()) {
			indiceContatoExcluido =i;
			exclu = "Contato Excluido";	
		}
	}
		
	//Percorre o vetor de contatos apartir do contato que sera excluido
	//O Contato a ser excluido ser substituido pelo proximo e assim por diante
	i=indiceContatoExcluido;
	while (i < indiceId ) {
		   VetorId[i] = VetorId[i+1];
		   i++;
	}
//O Indice ira diminuir devido a exclusao do Contato
indiceId--;	

return exclu ;	
}


int main () {

Agenda Obj;
int op,id,nid;

do {

	cout << "\nDigite Uma Opcao :"   << "\n"
	     << "1: Inserir Contato"   << "\n"
	     << "2: Buscar Contato"    << "\n"
	     << "3: Modificar Contato" << "\n"
	     << "4: Excluir Contato"   << "\n";
	cin  >> op;
	cout << "\n";
	
	switch(op)
	{
	case 1:
		cout << "Digite o Id do Contato a ser Inserido   : ";
		cin  >> id;
		cout << Obj.setContato(id)
		     << "\nLista de Contatos";
		     Obj.getContato(); 
		cout << "\n";
		break;
	case 2:
	    cout << "Digite o Id do Contato a ser Buscado    : ";
		cin  >> id;
		cout << Obj.buscarContato(id)
		     << "\nLista de Contatos";
		     Obj.getContato(); 
		cout << "\n";
		break;
	case 3:
	    cout << "Digite o Id do Contato a ser Modificado : ";
		cin  >> id; 
		cout << "Digite o Id do novo Contato             : ";
		cin  >> nid;
		cout << Obj.modificarContato(id,nid)
		     << "\nLista de Contatos";
		     Obj.getContato(); 
		cout << "\n";
		break;
	case 4:
		cout << "Digite o Id do Contato a ser Excluido   : ";
		cin  >> id;
		cout << Obj.excluirContato(id)
		     << "\nLista de Contatos";
		     Obj.getContato(); 
		cout << "\n";
		break;
	default:
		break;
	}

}while (op !=0);

	
}