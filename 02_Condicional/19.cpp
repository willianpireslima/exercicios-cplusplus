/*
A turma de Algoritmos e Estruturas de Dados I, por ter muitos alunos, será 
dividida em salas distintas de provas. Após um estudo feito pelo coordenador, 
decidiu-se dividi-la em três grupos. Fazer um algoritmo que leia o nome do aluno 
e indicar a sala em que ele deverá fazer as provas, de acordo com a letra inicial
do seu nome, tendo em vista a tabela a seguir e sabendo-se que todas as salas 
encontram-se no 

bloco F:
A – K: sala 101;
L – N: sala 102;
O – Z: sala 103.
*/
#include<iostream>
#include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()
{

string nome1;
		
cout << "\nDigite seu nome";
cin >> nome1;

string num;
num= nome1[0];

if(num=="A"||num=="B"||num=="C"||num=="D"||num=="E"||
   num=="F"||num=="G"||num=="H"||num=="I"||num=="J"||
   num=="K")
{
cout <<"\nA Sua sala e a 101";
}
  else
  {
    if(num=="L"||num=="M"||num=="N")
    {
		cout<< "\n A Sua sala e a 102";
    }
      else
      {
        if(num=="O"||num=="P"||num=="Q"||num=="R"||num=="S"||
           num=="T"||num=="U"||num=="V"||num=="X"||num=="Z")
          {
          cout<< "\n A Sua sala e a 103";
          
          } 
      } 
  }

}

