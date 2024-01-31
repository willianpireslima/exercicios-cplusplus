#include <stdio.h>
#include <iostream>
using namespace std;

void zerador(int a);

int main()
	{	
	int x;
	
	x=3;
	
	cout<<"\nO Valor de X e                "<<x;
	
	zerador(&x);
	
	cout<<"\nO Valor de X depois da funcao "<<x<<"\n";
	
	}


void zerador(int *a)
	{
    *a=0;
	}
