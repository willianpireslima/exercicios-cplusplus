/*
Fazer um algoritmo que leia os dados de um usuário de telefonia de uma empresa 
de telecomunicações: bairro e número completo do telefone; e verifique se o 
número do telefone (Exemplo: 32121212) está correto, ou seja, se o prefixo 
(4 primeiros dígitos) é correspondente ao bairro especificado. Sabendo-se que
os prefixos existem nos bairros conforme a tabela a seguir: 

Bairro Prefixo
Oeste 3223, 3225, 3212
Centro 3223, 3224, 3212
Sul 3241, 3242, 3243, 3281
Bueno 3251, 3285
Campinas 3233, 3291
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
#include<string> 
using namespace std;

int main ()
{
string numb;

cout << "/nDigite seu numero";
cin >> numb;

string num1,num2,num3,num4;
num1=numb[0],num2=numb[1],num3=numb[2],num4=numb[3];

if ((num1=="3" && num2=="2" && num3=="2" && num4=="3") ||
    (num1=="3" && num2=="2" && num3=="2" && num4=="5") ||
    (num1=="3" && num2=="2" && num3=="1" && num4=="2"))
{
cout <<"\nO Seu bairro eo Oeste";
}
   else
  { 
  
     
    if ((num1=="3" && num2=="2" && num3=="2" && num4=="3") ||
        (num1=="3" && num2=="2" && num3=="2" && num4=="4") ||
        (num1=="3" && num2=="2" && num3=="1" && num4=="2") )
     
    {
     cout <<"\nO Seu bairro eo Centro";
    
    }
      else
      {
        if ((num1=="3" && num2=="2" && num3=="4" && num4=="1") ||
           (num1=="3" && num2=="2" && num3=="4" && num4=="2") ||
           (num1=="3" && num2=="2" && num3=="4" && num4=="3") ||
           (num1=="3" && num2=="2" && num3=="8" && num4=="1"))
         {
         cout <<"\nO Seu bairro eo Sul";
    
         }
           else
           {
              if ((num1=="3" && num2=="2" && num3=="5" && num4=="1") ||
                 (num1=="3" && num2=="2" && num3=="8" && num4=="5"))
              
                {
                cout <<"\nO Seu bairro eo Bueno";
                }
                  else
                  {
                    if ((num1=="3" && num2=="2" && num3=="3" && num4=="3")||
                    (num1=="3" && num2=="2" && num3=="9" && num4=="1"))
                    
                     {
                       cout <<"\nO Seu bairro eo Campinas";
                     }
                              
                }      
           }
             
      }

  }


}
