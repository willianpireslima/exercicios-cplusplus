/*
Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, ele utiliza o índice de
massa corporal (IMC). Sabe-se que o IMC é calculado através da seguinte fórmula:
 IMC =peso/altura^2 onde: peso é dado em kg e altura é dada em metros. 
Criar um algoritmo que apresente o nome do paciente e sua faixa de risco, baseando-se na seguinte
tabela: 
IMC Faixa de Risco
abaixo de 20 abaixo do peso ideal
de 20 até 25 peso normal
acima de 25 até 30 excesso de peso
acima de 30 até 35 obesidade
acima de 35 obesidade mórbid
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main()
{
float p,a; 
cout <<"\nDigite o seu peso   ";
cin >> p;
cout <<"\nDigite a sua altura ";
cin >> a;
float imc;
imc=p/pow(a,2);

if(imc<20)
{
cout << "\nVoce esta abaixo do peso ideal";
}
 else
 {
   if(imc>=20 && imc<=25)
   {
    cout << "\nVoce possui peso normal";
   }  
    else
    {
       if(imc>25 && imc<=30)
       {
        cout << "\nVoce  possui excesso de peso";
        }  
          else
          {
             if(imc>30 && imc<=35)
            {
             cout << "\nVoce  possui obesidade";
            }  
              
                    else
                    {
						
					   if(imc>35)
                       {
                         cout << "\nVoce possui obesidade morbida";
                       }  	
						
					}
                         
              }   
          
          }
    
    }
 
 
}
