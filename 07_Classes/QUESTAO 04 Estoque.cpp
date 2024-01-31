#include <iostream>
using namespace std;

class Estoque 
	{
	
	private:
		string descricao;
		int prodNum;
		int qtd;
		double preco;
	
	public:
		void   setDescricao  (string aux);
 	    string getDescricao  ()const;
   	   
       void   setProdutNum  (int    aux);
   	   int    getProdutNum  ()const;       
   	   
       void   setQtd        (int    aux);
   	   int    getQtd        ()const;
   	   
       void   setPreco      (double aux);
   	   double getPreco      ()const;    
	
	Estoque();
	
	};


// Metodo Construtor
	
Estoque::Estoque()
	{
  
	prodNum = qtd = 0;
	preco =0.0;

	}	
	
// Descricacao

void Estoque ::  setDescricao  (string aux) {
	
	descricao = aux;
	}


string Estoque :: getDescricao  ()const {
	
	return descricao;
	}
   	   
// Numero do produtp

void Estoque ::  setProdutNum  (int    aux) {
	
	prodNum = aux;
	}



int  Estoque ::  getProdutNum  ()const {
	
	return prodNum;
	}    
   	   
// Quantidade Do Produto

void  Estoque :: setQtd        (int    aux) {
	
	qtd = aux;
	}


int  Estoque ::  getQtd        ()const {
	
	return qtd;
	}
   	   

// Preco 

void Estoque ::  setPreco      (double aux) {
	
	preco = aux;
	}


double Estoque :: getPreco      ()const  {
	
	return preco;
	} 



// prototipo de funcoes

void InserirEstoque  (int tam);


// funçoes

void InserirEstoque (int tam) {
	
	class Estoque Objeto[tam];
		
	string DescricaoDoProduto;
	
	int NumeroDoProduto,QuantidadeDoProduto;
	
	double PrecoDoProduto;

	for (int i=0; i < tam; i++) {
		
		cout << "Digite Descricao Do Produto    ";	
		cin  >> DescricaoDoProduto;
		Objeto[i].setDescricao  (DescricaoDoProduto);
		
		do {
	
        	cout << "\nDigite Numero do Produto       ";	
			cin  >> NumeroDoProduto;
			Objeto[i].setProdutNum  (NumeroDoProduto);
		
			cout << "\nDigite Quantidade do Produto   ";	
			cin  >> QuantidadeDoProduto;
			Objeto[i].setQtd        (QuantidadeDoProduto);
		
			cout << "\nDigite Preco Do Produto        ";	
			cin  >> PrecoDoProduto;
			Objeto[i].setPreco      (PrecoDoProduto);

        	cout << "\n";
			}while (NumeroDoProduto < 0 || QuantidadeDoProduto < 0 ||
			        PrecoDoProduto  < 0);				
        }			           	   	
	
	for (int i=0; i < tam; i++) {
	
		cout << "Descricao Do Produto    " << Objeto[i].getDescricao  ();
		cout << "\nNumero do Produto     " << Objeto[i].getProdutNum  (); 
		cout << "\nQuantidade do Produto " << Objeto[i].getQtd        (); 
		cout << "\nPreco Do Produto      " << Objeto[i].getPreco      (); 
		
		cout << "\n";
		}
		
	}	



// principal

int main () {
	
	int tamanho;
	
	cout << "Digite a quantidade de itens do estoque >= e < 20  ";
	cin  >> tamanho;
    cout << "\n";
	
	
	InserirEstoque (tamanho);
		
	
	return 0;
	}