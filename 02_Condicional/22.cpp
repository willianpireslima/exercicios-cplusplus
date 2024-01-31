/*
digite o maior numero parir da seginte formula ((a+b)+|a-b| )/2
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

int r;
r=(a+b)/2+(a-b)/2;

if(r>c)
{
cout << "\nO Maior Numero e";
cout << r;
}
else
{
cout << "\nO Maior Numero e";
cout << c;

}



}
