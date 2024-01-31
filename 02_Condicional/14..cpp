/*
Um usuário deseja um algoritmo onde ele possa escolher o tipo de média que 
deseja calcular a partir de3 notas. Faça um algoritmo que leia as notas, 
sua opção escolhida e calcule a média. 
(1) aritmética; 
(2) ponderada (3, 3, 4);
(3) harmônica;
(4) geométrica;
 (5) quadrática.
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main ()

{
int a,b,c;
string resp;

cout<< "\nDigite  a para media artimetica";
cout<< "\\nDigite p para media ponderada";
cout << "\nDigite h para media harmonica";
cout<< "\\nDigite g para media geometrica";
cout << "\nDigite q para media quadratica";


cout<< "\nDigite um numero";
cin >> a;
cout<< "\\nDigite a outro numero";
cin >> b;
cout << "\nDigite a outro numero";
cout << c;

if(resp=="a")
{
cout << "\n O media artimetica";
cout << (a+b+c)/3;
}
else
{
   if(resp=="p")
   {
    cout << "\n O resutado da media ponderada e";
    cout << (a*3+b*3+c*4)/10;
   }
      else
     { 
       if(resp=="h")
       {
         cout << "\n O media harmonica e";
         cout << (1/a)+(1/b)+(1/c)/3;
       }
          else
          {
             if(resp=="g")
             {
               cout << "\n O resutado da media geometrica e";
               cout << sqrt (b,3);
             }
           
		       else
               {
                  if(resp=="q")
                  {
                    cout << "\n O resutado da media media quadratica e";
                     cout << a/b;
                  }
               }
		   }     
       }
 }

}
