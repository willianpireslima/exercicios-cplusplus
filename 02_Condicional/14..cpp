/*
Um usu�rio deseja um algoritmo onde ele possa escolher o tipo de m�dia que 
deseja calcular a partir de3 notas. Fa�a um algoritmo que leia as notas, 
sua op��o escolhida e calcule a m�dia. 
(1) aritm�tica; 
(2) ponderada (3, 3, 4);
(3) harm�nica;
(4) geom�trica;
 (5) quadr�tica.
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
