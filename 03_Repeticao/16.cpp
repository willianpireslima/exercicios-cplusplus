/*
Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para preenchimento de vagas no 
seu quadro de funcionários, utilizando processamento eletrônico. Supondo que você seja o programador encarregado desse 
levantamento, fazer um algoritmo que: 
? leia um conjunto de dados para cada candidato contendo: 
a) número de inscrição do candidato; 
b) idade;
c) sexo (masculino, feminino); 
d) experiência no serviço (sim ou não). 
O último conjunto contém o número de inscrição do candidato igual a zero. 
? calcule: 
a) o número de candidatos do sexo feminino; 
b) o número de candidatos do sexo masculino; 
c) idade média dos homens com mais de 45 anos entre o total de homens; 
d) número de mulheres que têm idade inferior a 35 anos e com experiência no serviço; 
e) a menor idade entre mulheres que já tem experiência no serviço; 
? escreva: 
a) o número de inscrição das mulheres pertencentes ao grupo descrito no item e; 
b) o que foi calculado em cada item acima especificado.
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{



//ni= numero de inscricao,id=idade,
//cm=contador masculino,cf=contador feminino
//cm45=homens mais de 45,menorIDEX=Menor idade de mulheres experientes
//cf35ex=mulheres menos de 35 e experientes
//scm45=somador de idade

int ni,id,cm,cf,cm45,scm45,menorIDEX,cf35ex;
cm=0,cf=0,cm45=0,scm45=0,menorIDEX=0,cf35ex=0;

string sexo,resp;

cout<<"\nDigite seu numero de inscricao";
cin>>ni;

while(ni!=0)
{
cout<<"\nDigite seu numero de inscricao";
cin>>ni;
cout<<"\nDigite sua idade";
cin>>id;
cout<<"\nDigite seu sexo";
cin>>sexo;
cout<<"\nDigite sua experiencia no servico (sim ou nao).";
cin>>resp;

   if  (sexo=="m")
  {
       cm=cm+1;

      if  (id>45)
      {
          cm45=cm45+1;
          scm45=scm45+id;
      }


  }
  
  else
  {
       if  (sexo=="f")
       {
            cf=cf+1;
        
            if(resp=="s")
            {
                 if(id<35)
                 {
                 cf35ex=cf35ex+1;
                 
                 }
                 
                 if  (menorIDEX<id)
                 {       
                      menorIDEX=id;
                 }
                 
            
            
            }
        
        }    
   
   
   
   
   }



}




cout<<"\n numero de candidatos do sexo feminino";
cout<<cf;
cout<<"\n numero de candidatos do sexo masculino";
cout<<cm;
cout<<"\n idade media dos homens com mais de 45 anos entre o total de homens";
cout<<scm45/(cm+cm45);
cout<<"\nmenor idade entre mulheres que ja tem experiencia no servico";
cout<<menorIDEX;


}
