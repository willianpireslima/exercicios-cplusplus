/*
Fazer um algoritmo que receba a idade e o nome de um nadador e imprima o seu 
nome, a sua idade e a categoria do mesmo, de acordo com as regras a seguir:
Categoria Faixa Etária
Infantil A 5 a 7 anos
Infantil B 8 a 10 anos
Juvenil A 11 a 13 anos
Juvenil B 14 a 17 anos
Sênior A partir de 18 anos
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
int main ()
{
string nome;
int id;

cout <<"\nDigite seu nome  ";
cin >> nome;
cout <<"\nDigite sua idade ";
cin >> id;

cout <<"\nseu nome ";
cout << nome;
cout <<"\nsua idade ";
cout << id;

if(id>=5 && id<=7)
{
cout <<"\nSua categoria e Infantil A";
}

 else
{
        
        if (id>=8 && id<=10)
        {
          cout <<"\nSua categoria e Infantil B";
        }
          else
         {
        
            if (id>=11 && id<=13)
           {
           cout <<"\nSua categoria e Junior A";
           }
             else
             {
        
                if (id>=14 && id<=17)
                 {
                   cout <<"\nSua categoria e Junior B";
                 }
             
                    else
                    {
        
                           if (id>=18)
                          {
                          cout <<"\nSua categoria e Senior";
                          }
                    }
                       
                       
             }
         
               
         }
               

}




}








