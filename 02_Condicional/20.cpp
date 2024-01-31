/*
Escrever um algoritmo que leia um par de coordenadas (x, y) e imprima uma 
mensagem informando em qual quadrante está o ponto. O algoritmo deve também ser 
capaz de identificar se o ponto está sobre um dos eixos ou no ponto central.
*/
#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;
int main()

{

int x,y;

cout << "\nDigite x  ";
cin >> x;

cout << "\nDigite y  ";
cin >> y;

if (x>0 && y>0)
{
cout << "1Â° quadrante";
}

else
{
   if (x<0 && y>0)
   {
   cout << "2Â° quadrante";
   }
     else
      {
        if(x<0 && y<0)
        {
        cout << "3Â° quadrante";
        }
          else
          {
             if(x>0 && y<0)
             {
             cout << "4Â° quadrante";
             }
          
        }
      
      
     }
      

}



}
