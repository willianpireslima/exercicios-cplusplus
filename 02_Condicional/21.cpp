/*
Fazer um algoritmo que leia três números inteiros quaisquer e os ordene de forma crescente
*/

#include<iostream>
# include <math.h> 
#include<stdlib.h> 
using namespace std;

int main()
{
int a,b,c;
cout <<"\nDigite a  ";
cin >> a;
cout <<"\nDigite b  ";
cin >> b;
cout <<"\nDigite c  ";
cin >> c;

if(a<b && b<c)
{
cout << a << b << c;
}
  else
  {
     if(a<c && c<b)
      {
      cout << a << c << b;
      }
        else
       {
       
         if(b<a && a<c)
         {
          cout << b << a << c;
         }
            else
            {
              if(b<c && c<a)
               {
               cout << b << c << a;
               }
                 else
                 {
                    if(b<a && a<c)
                    {
                      cout << b << a << c;
                    }
                      else
                      {
                         if(c<a && a<b)
                         {
                          cout << c << a << b;
                          }
                           else
                           {
                             if(c<b && b<a)
                             {
                             cout << c << b << a;
                             }
                           
                           
                           }
                         
                      
                      }
                      
                      
                 }
                     
            
            }
           
        }
             
    }
 
 
 }
