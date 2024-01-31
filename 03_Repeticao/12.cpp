/*
digite a nota de 100 anos calcule a aprovacao se a nota ficar entre 40 e 60
em seguida calcule a maior e menor nota ,media da turma
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{
//fr=ferquencia,sm= somador de medias,cr=contador de reprovados,
//ca=contador de aprovados,crf=contador de reprovados por frequencia 
//ma=matricula

int i,n1,n2,n3,m,fr,sm,maior,menor,ca,cr,crf,ma;
m=(n1+n2+n3)/3,sm=0,ca=0,cr=0,crf=0,maior=0,menor=0;

for(i=0;i<=100;i=i+1)	
{
cout<<"\nDigite o seu numero de matricula";
cin>> ma;
cout<<"\nDigite a sua primera nota";	
cin>>n1;
cout<<"\nDigite a sua segunda  nota";	
cin>>n2;		
cout<<"\nDigite a sua terceira nota";	
cin>>n3;
cout<<"\nDigite a sua frequencia";	
cin>>fr;	
sm=sm+m;		

    if  (m>=60 && fr>=40)		
   {
        ca=ca+1;
	    cout<<"\nVoce esta aprovado";
   }
       else
      {
          if  (m<60 && fr<40)		
          {
              cr=cr+1;
			  cout<<"\nVoce esta reprovado";
          }
             	
	  }
	

if  (fr<40)	
{
    crf=crf+1;
}



if(maior<m)
{
maior=m;
}	

if(menor>m)
{
menor=m;
}

}

cout<<"\nA nota media da turma";
cout<<m/100;
cout<<"\nO Total de reprovados e";
cout<<cr+crf;
cout<<"\nO porcentagem reprovados em infrequencia";
cout<<(crf/100)*(ca+cr);
 	
}


