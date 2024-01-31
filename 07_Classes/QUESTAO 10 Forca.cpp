# include <iostream>
using namespace std;

class Forca {
	
	private:
		string Palavra;
		int  Tamanho;
	
	public:
		void  setPalavra       (string aux);
		void  setTamanho       (int aux);
		string getPalavra      ();
		int  getTamanho        ();
		string MetodoPrincipal (char aux);
	
	};

// receber

void Forca ::  setPalavra (string aux) {
	
	Palavra = aux;
	}
void Forca ::  setTamanho (int aux) {
	
	Tamanho = aux;
	}
	
// mostrar

string Forca ::  getPalavra () {
	
	return Palavra;
	}
int  Forca ::  getTamanho () {
	
	return Tamanho;
	}


// metodo mestre

string Forca :: MetodoPrincipal (char aux) {
	

	// buscar retornar mensagem de acerto ou erro
	
	string Mensagem;
	int i;
	
	if (Palavra[0]==aux) {
		
		Mensagem= "Voce Acertou";
		}
	else
		{
		
		for (i =0; i<Tamanho && Palavra[i] != aux ; i++) {
		
			if (i == Tamanho -1 ) {
			
		 	 	 Mensagem= "Voce Errou";		
				} 
			else
               {		
				Mensagem= "Voce Acertou";	
               }
		
			}
		
		}

	return Mensagem;
	}


int main () {
	
	string palavra;
	int  tamanho;
	class Forca obj;
	

	
	cout << "Digite A Palavra              ";
	cin  >> palavra;
	cout << "Digite O Tamanho Da Palavra   ";
	cin  >> tamanho;
	
	obj.setPalavra (palavra);
	obj.setTamanho (tamanho);
	
	cout << "Tamanho =   " << obj.getTamanho() << endl;
	cout << "Palavra =   " << obj.getPalavra() << endl;;
	
	cout << "\n";
	
	char letra;
	
	int vencedor,perdedor;
	
	vencedor = 0;
	perdedor = 0;
	
	do {
	
		cout << "O Letra Da Palavra   ";
		cin  >> letra;
		cout << "\n";
	
		cout <<	obj.MetodoPrincipal(letra) << endl;	
		
		if (obj.MetodoPrincipal(letra)=="Voce Acertou") {
			vencedor++;
			}
		else
			{
			perdedor++;
			}
		
		cout << "Numero De Acertos =   " << vencedor << endl;
		cout << "Numero De Erros   =   " << perdedor << endl;;
		cout << "\n";
		
		}while (vencedor != tamanho && perdedor != 6 );
				  
	if (vencedor == tamanho) {
		
		cout << "Voce Venceu" << endl;
		}
	else
		{
		cout << "Voce Perdeu" << endl;
		}
	
	}
