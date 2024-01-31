/*
Deseja-se fazer um levantamento a respeito da ausência de alunos a primeira 
prova de programação de computadores para cada uma das 14 turmas existentes. 
Para cada turma, e fornecido um conjunto de valores, sendo que os dois primeiros 
valores do conjunto correspondem a identificação da turma (A, ou B, ou C, … ) 
e ao número de alunos matriculados, e os demais valores deste conjunto contem 
o número de matrícula do aluno e a letra A ou P para o caso de o aluno esta 
ausente ou presente, respectivamente. Fazer um algorítimo que:
*/
#include <iostream>
using namespace std;
int main ()
{

//i e i2 variaveis do for,idt=indentificador de turma
//nm=numero da matricula,cf=contador de faltas,n=numero de alunos
//cft=contador de faltas da turma

int i,i2,idt,n,nm,cf,cft;
cf=0,cft=0;

string presenca;

 for(i=0;i<14;i=i+1)
 {
 cout<<"\nDigite a identificacao da turma";
 cin>>idt;
 cout<<"\nDigite o numero de alunos matriculados";
 cin>>n;


     for (i2=0;i2<n;i2=i2+1)
     {
     cout<<"\nDigite o numero de matricula";
     cin>>nm;
	 cout<<"\n aluno estar ausente ou presente";
     cout<<"\nDigite A para ausente e P para presente"
	 cin>>presenca;
     
         if  (presenca=="A")
         {
             cf=cf+1;
         
         }
     
     }
     
     cout<<"\n A turma";
     cout<<idt;
     cout<<"\n posui esta quantidade de ausentes";
     cout<<cf/100*n;

     if (cf/100*n>0.05*n)
     {
		cft=cft+1; 
        
     }
 }


cout<<"\nA Quantidade de turmas em que os ausentes sao mais de 5%";
cout<<cft;








}
