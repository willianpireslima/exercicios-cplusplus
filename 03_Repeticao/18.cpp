/*

*/
#include <iostream>
using namespace std;
int main()
{

//PF,SF,TF=Tempos oficiais
float PF,SF,TF,PT,ST,TT;

//inscricao,P1,S2,T3=Tempos da equipe
int in,P1,S2,T3;

cout<<"\nDigite o tempo padrao das fases";
cout<<"\nPrimeia fase";
cin>>PF;
cout<<"\nSegunda fase";
cin>>SF;
cout<<"\nTerceira fase";
cin>>TF;

cout<<"\nDigite o numero de incriscao";
cin>>in;

while(in!=999)

{

cout<<"\nDigite o numero de incriscao";
cin>>in;

cout<<"\nDigite o tempo que a equipe gastou";

cout<<"\nPrimeia fase";
cin>>PT;
cout<<"\nSegunda fase";
cin>>ST;
cout<<"\nTerceira fase";
cin>>TT;


if(PF-PT>3)
{
P1=100;
}
else
{

if(3<=PF-PT && PF-PT <=5)
{
P1=80;
}
   
    else
    {
        if  (PF-PT>5)
        {
             P1=(PF-PT-5)/5;
        }
   }
   
   

}


if(SF-ST>3)
{
S2=100;
}

    else
   {

        if  (3<=SF-ST && SF-ST <=5)
        {
             S2=80;
        }
   
            else
           {
               if  (SF-ST>5)
               {
                   S2=(SF-ST-5)/5;
               }
             
          }
   }


if(TF-TT>3)
{
T3=100;
}

else
{

    if  (3<=TF-TT && TF-TT <=5)
    {
        T3=80;
    }
   
       else
       {
            if  (TF-TT>5)
            {
                T3=(TF-TT-5)/5;
            }
             
       }
 
   
}

cout<<"\n O Total de pontos e";
cout<<P1+S2+T3;

}



}






