/*
Dados quatro números distintos, desenvolver um algoritmo que determine e 
imprima a soma dos três menores
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int A,B,C,D;

cout << "\nDigite quatro numeros distintos";
cout << "\nDigite o primeiro numero";
cin >> A;
cout<< "\nDigite o segundo numero";
cin >> B;
cout<< "\nDigite o terceiro numero";
cin >> C;
cout<< "\nDigite o quarto numero";
cin >> D;

if(A>B && B>C && C>D) 
{
	cout << "\nSoma dos tres menores e";
    cout << B+C+D;
}
else  
{ 
	if (B>C && C>D)
	{
      cout << "\nSoma dos tres menores e";
      cout << A+C+D;
    }
    else
    { 
		if(C>D)
	   {
          cout << "\nSoma dos tres menores e";
          cout << A+B+D;
       }
       else
       { 
		  if(C<D)
		   {
            cout << "\nSoma dos tres menores e";
            cout << A+B+C;
		   }
       }
    }
    
}


}
