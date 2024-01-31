/*
Numa fábrica trabalham homens e mulheres divididos em três classes com os respectivos salários:
A – os que fazem ate 30 pecas por mês, salário mínimo;
B – os que fazem de 31 a 35 pecas por mês, salário mínimo e mais 3% do salário 
mínimo por peca acima das 30 iniciais;
C – os que fazem mais de 35 pecas por mês, salário mínimo e mais 5% do salário 
mínimo por peca acima das 30 iniciais;
*/
#include <iostream>
using namespace std;
int main ()
{
 // no=numero do operario,pm=pecas por mes,tp=total de pagamento da fabrica
//tpm=total de pecas por mes,cm=contador masculino,cf=contador feminino
int no,pm,sal,tp,tpm,cm,cf,maior,Mmaior;
tp=0,tpm=0,cm=0,cf=0,maior=0,Mmaior=0;

string sexo;

cout<<"\nDigite o numero do operario";
cin>>no;


 while(no!=0)
 {
 cout<<"\nDigite o numero do operario";
 cin>>no;
 cout<<"\nDigite o  numero de pecas fabricadas por mes";
 cin>>pm;
    
 // sequencia de if para identificar o salario
     
     if(pm<=30)
     {
       sal=880;
       cout<<"\nO Seu salario e";
       cout<<sal;
       tp=tp+sal;
     }
         else
         {
        
             if  (pm>=30 && pm<=35) 
             {
                 sal=880*1.03;
                 cout<<"\nO Seu salario e";
                 cout<<sal;
                 tp=tp+sal;
             }
                 else
                 {     if  (pm>35) 
                      {
                          sal=880*1.05;
                          cout<<"\nO Seu salario e";
                          cout<<sal;                     
                          tp=tp+sal;
                      }
        
                 }
        
        }

 // total de todos os salario
 tpm=tpm+tp;

 cout<<"\nDigite o  sexo do operario";
 cin>>sexo;
 
 //sequenca de if para contar os operarios homens e mulheres
    
    if(sexo=="H")
    {
    cm=cm+1;
    
    }
        else
        {
            if  (sexo=="F")
            {
                cf=cf+1;
    
            }
        
        
        }

 //para indentificar o maior numero
     
     if (maior<sal)
     {
        maior=sal;
        Mmaior=ci;
	 }
 
 }

cout<<"\no total da folha mensal de pagamento da fabrica";
cout<<tpm;
cout<<"\na media de pessoas fabricadas pelos homens em cada classe";
cout<<tpm/cm;
cout<<"\na media de pessoas fabricadas pelas mulheres em cada classe";
cout<<tpm/cf;
cout<<"\no numero do operario ou operaria de maior salario";
cout<<maior;

}








