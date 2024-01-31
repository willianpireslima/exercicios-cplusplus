# include <iostream>
#include <exception>
using namespace std;

class TrataDivZero
{
      public:
            TrataDivZero(int n);            
            void Msg();
      private:
              int NLinha;
};


int main() 
	{
     
     int n, m;
     cout << "Numerador:   ";
     cin >> n;
     cout << "Denominador: ";
     cin >> m;
    
     try // inicio do bloco TRY
     {
        
        if (m==0)
        {  
             // lança a exceção, criando um objeto da classe TrataDivZero
             // e passando o número da linha onde o erro ocorreu
             throw (1);  
             // dentro deste bloco nada é executado após o throw.  
        }
        cout << "Divisão: "  << (double)n/m << endl;
     
	 } // final do bloco TRY
      
     catch (int aux) {	 // pode ter ou não o objeto de throw
                         // apenas o tipo é obrigatório
          if (aux == 1) {
						
			cout << "Divisao por zero";
			}
			
			else
				cout << "erro desconhecido";
     	 } 
	}