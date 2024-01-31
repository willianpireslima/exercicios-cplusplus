/*
Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. 
A última linha, que não entrara nos cálculos, contem o valor nome igual a vazio.
*/
# include<iostream>
# include<stdlib.h>
using namespace std;
int main ()
{
string nome;
// id=idade,c=contador,s=soma
int id,c,s;
c=0,s=0;

cout<<"\nDigite seu nome    ";
cin >>nome;

while(nome!= "vazio")
{

cout<<"\nDigite seu nome ";
cin >>nome;
cout<<"\nDigite sua idade   ";
cin >>id;
c=c+1;
s=s+id;


}
cout<<"nA Media e";
cout<<s/c;
}

