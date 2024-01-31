/*
Elabore um algoritmo que leia dois números inteiros e a operação aritmética 
desejada; calcule, então, a resposta adequada. Utilize os símbolos da tabela 
a seguir para saber qual a operação aritmética escolhida.
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
