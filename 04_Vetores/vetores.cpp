#include <stdio.h>
#include <iostream>
using namespace std;
int main()
	{	
    
    int x;
    int *ptr;
    ptr = &x;
    cout << "O endereco   de X no ponteiro: " << ptr 
         << "\nO endereco   de X no propio X  " << &x 
         << "\nO valor    de X é: " << x << endl;
      
    cout<<"\n";
    
    int y;
    
    int *ponteiro;
   
    y = 5;
    
    ponteiro = &y;
   
    cout<<"\nO Valor de y no ponteiro  "<<*ponteiro;  // derreferenciando um ponteiro
    
    *ponteiro = 10;  // usando derreferencia no "lado esquerdo" de uma atribuição
    
    cout<<"\nO Valor de y no ponteiro depois da mudanca "<< *ponteiro;
    cout<<"\nO Valor do proprio y     depois da mudanca "<< *ponteiro;
    
    cout<<"\n\n";
    
    int i;
    int *v;
    v =new int [5];  // 'v' é um ponteiro para uma área que
                      // tem 10 inteiros.
                      // 'v' funciona exatamente como um vetor
     v[0] = 10;
     v[1] = 11;
     v[2] = 12;
     v[3] = 13;
     v[4] = 14;
     v[5] = 15;

     for(i = 0; i < 5; i++)
        cout<<"vetor posicacao  "<<i<<" e valor  "<<v[i]<<"\n";

     cout<<"endereco  "<<*v<<"\n";  // imprime o endereço da área alocada para 'v'
     delete (v);
	} 
