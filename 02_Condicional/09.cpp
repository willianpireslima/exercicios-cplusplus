/*
Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcion�rio pelo governo.
Seu programa dever� ler o n�mero de dependentes, o sal�rio do funcion�rio e o imposto normal pago. O
imposto bruto � de 20% do sal�rio do funcion�rio se o funcion�rio ganha mais de 12 sal�rios m�nimos; o
imposto bruto � de 8% do sal�rio do funcion�rio se o funcion�rio ganha mais de 5 e at� 12 sal�rios
m�nimos; e de quem ganha 5 sal�rios m�nimos ou menos n�o � cobrado o imposto de renda. Sabe-se que o
governo cobra 4% de taxa adicional sobre o imposto bruto. Determine o imposto l�quido a ser pago pelo
funcion�rio subtraindo R$ 300,00 para cada dependente do mesmo, no imposto bruto. O programa
calcular� e imprimir� o imposto a ser pago ou devolvido, que � a diferen�a entre o imposto normal
descontado e o imposto l�quido. Se a diferen�a for negativa mostrar a mensagem �imposto a pagar�, caso
contr�rio �imposto a receber�. Considere o sal�rio m�nimo como uma constante no seu programa. 
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main()
{

// nd=numero de dependentes,s= salario do funcionario,im=imposto pago

int nd;
float s,im;
cout << "\nDigite o numero de dependentes";
cin >>  nd;
cout << "\nDigite o salario do funcionario";
cin  >>  s;
cout << "\nDigite o imposto pago";
cin >>  im;

// variavel para o imposto bruto

float imb;

if(s>(12*880))
{
cout << "o imposto bruto e de";
imb=s*0.20;
cout << imb;
}
   else
    {      
       if(s>(5*880))
       {
       cout << "o imposto bruto e de";
       imb=s*0.08;
       cout << imb;
       }
         else
          {
            if(s<(5*880))
            {
		    cout << "nao e combrado imposto";
            }      
           }
     }


//iml= imposto liquido;val =imposto bruto-imposto liquido

float val,iml;
iml=(nd*300)-imb;
val=imb-iml;

if(val<0)
{
	
cout << "\nimposto a pagar";
}
else
{	
cout << "\nimposto a receber";
    		
}


}


