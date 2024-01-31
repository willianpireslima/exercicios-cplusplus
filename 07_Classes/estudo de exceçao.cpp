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
             // lan�a a exce��o, criando um objeto da classe TrataDivZero
             // e passando o n�mero da linha onde o erro ocorreu
             throw (1);  
             // dentro deste bloco nada � executado ap�s o throw.  
        }
        cout << "Divis�o: "  << (double)n/m << endl;
     
	 } // final do bloco TRY
      
     catch (int aux) {	 // pode ter ou n�o o objeto de throw
                         // apenas o tipo � obrigat�rio
          if (aux == 1) {
						
			cout << "Divisao por zero";
			}
			
			else
				cout << "erro desconhecido";
     	 } 
	}