/*
Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. 
Para cada curso, e fornecido o seguinte conjunto de valores:
� O c�digo do curso;
� N�mero de vagas;
� N�mero de candidatos do sexo masculino;
� N�mero de candidatos do sexo feminino;
O �ltimo conjunto, para indicar fim de dados, contem o c�digo do curso igual a zero. Fazer um algoritmo que:
� Calcule e escreva, para cada curso, o n�mero de candidatos por vaga e a porcentagem de candidatos do sexo feminino.
� Determine o maior n�mero de candidatos por vaga e escreva esse n�mero juntamente com o c�digo do curso correspondente ( supor que n�o haja empate );
� Calcule e escreva o total de candidatos;
*/
# include<iostream>
# include<stdlib.h>
# include<math.h>
using namespace std;
int main ()
{

// cc=codico do curso,nv=numero de vagas,cm=candidatos do sexo masculino
//cf= candidatos do sexo feminino
//cpv=canditados por vaga
//td=total de canditados do curso,tdtc=total de todos curso
int cc,nv,cm,cf,cpv,td,tdtc,maior,mMaior;
tdtc=0,maior=0;mMaior=0;

cout<<"\nDigite o c�digo do curso";
cin>>cc;


while(cc!=0)
{
	

cout<<"\nDigite o c�digo do curso;";
cin>>cc;
cout<<"\nDigite o n�mero de vagas";
cin>>nv;
cout<<"\nDigite o n�mero de candidatos do sexo masculino";
cin>>cm;
cout<<"\nDigite o n�mero de candidatos do sexo feminino";
cin>>cf;
cpv=nv/(cm+cf);
cout<<"\nO Numero de candidatos por vaga e";
cout<<cpv;
cout<<"\nA Porcentagem de canditas femininas e";
cout<<(cf/100)*(cm+cf);
cout<<"\nO codico do curso  "<<cc;
tdtc=tdtc+td;
td=cm+cf;
   
    if  (cpv>maior)
	{
        maior=cpv;	
	}   mMaior=cc;

}


cout<<"\nO curso com mais candidatos por vaga";
cout<< mMaior;
cout<<"\nO Total de candidatos e";
cout<<tdtc;
















}
