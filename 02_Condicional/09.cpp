/*
Desenvolver um algoritmo que determine o imposto de renda cobrado de um funcionário pelo governo.
Seu programa deverá ler o número de dependentes, o salário do funcionário e o imposto normal pago. O
imposto bruto é de 20% do salário do funcionário se o funcionário ganha mais de 12 salários mínimos; o
imposto bruto é de 8% do salário do funcionário se o funcionário ganha mais de 5 e até 12 salários
mínimos; e de quem ganha 5 salários mínimos ou menos não é cobrado o imposto de renda. Sabe-se que o
governo cobra 4% de taxa adicional sobre o imposto bruto. Determine o imposto líquido a ser pago pelo
funcionário subtraindo R$ 300,00 para cada dependente do mesmo, no imposto bruto. O programa
calculará e imprimirá o imposto a ser pago ou devolvido, que é a diferença entre o imposto normal
descontado e o imposto líquido. Se a diferença for negativa mostrar a mensagem “imposto a pagar”, caso
contrário “imposto a receber”. Considere o salário mínimo como uma constante no seu programa. 
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


