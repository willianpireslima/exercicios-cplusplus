/*
Elabore um algoritmo que leia dois n�meros inteiros e a opera��o aritm�tica 
desejada; calcule, ent�o, a resposta adequada. Utilize os s�mbolos da tabela 
a seguir para saber qual a opera��o aritm�tica escolhida.
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a,b;
string resp;
cout<< "\nDigite a";
cin >> a;
cout<< "\nDigite b";
cin >> b;
cout << "\nDigite a operacao";
cout << resp;

if(resp=="+")
{
cout << "\n O resutado da soma e";
cout << a+b;
}
else
{
   if(resp=="-")
   {
    cout << "\n O resutado da subtracao e";
    cout << a-b;
   }
      else
     {
       if(resp=="*")
         {
         cout << "\n O resutado da multiplicacao e";
         cout << a*b;
         }
          else
          {
             if(resp=="/")
             {
               cout << "\n O resutado da divisao e";
               cout << a/b;
             }
           }
            
      }
 
 }

}
