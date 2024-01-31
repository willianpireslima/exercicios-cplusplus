/*
Os bancos atualizam diariamente as contas de seus clientes. Essa atualiza��o envolve a an�lise dos dep�sitos e retiradas de 
cada conta. Numa conta de balan�o m�nimo, uma taxa de servi�o � deduzida se a conta cai abaixo de uma certa quantia especificada. 
Suponha que uma conta particular comece o dia com um balan�o de R$ 60,00. O balan�o m�nimo exigido � R$ 30,00 e se o balan�o 
de fim de dia for menor do que isso, uma taxa � reduzida da conta. A fim de que essa atualiza��o fosse feita utilizando computador, � 
fornecido o seguinte conjunto de dados: 
? a primeira linha cont�m o valor do balan�o m�nimo di�rio, quantidade de transa��es e taxa de servi�o; 
? as linhas seguintes cont�m n�mero da conta, valor da transa��o e c�digo da transa��o (dep�sito ou retirada); 
Escrever um algoritmo que: 
? calcule o balan�o (saldo/d�bito) da conta ao fim do dia (se o resultado for negativo, isto significa insufici�ncia de 
fundos na conta); 
? escreva, para cada conta, o seu n�mero e o balan�o calculado. Se n�o houver fundos, imprima o n�mero da conta e a 
m nsag m �N�O H� FUNDOS�
*/
#include <iostream>
using namespace std;
int main()
{
  //bl=balanco minimo inicial,tx=taxa de servico,nt=numero de transacoes
  //nc=numero da conta,vl=valor da transacao,blf=banco minino final
  
  int bli,tx,nt,nc,vl,i,blf;
  string codico;
  
  cout<<"\nDigite o valor do balanco minimo";
  cin>>bli;
  cout<<"\nDigite a taxa de servico";
  cin>>tx;
  
  while  (nc!=0)
  {
         cout<<"\nDigite o valor do banlanco minimo";
         cin>>bli;
         cout<<"\nDigite a quantidade de transacoes";
         cin>>nt;


      for   (i=0;i<nt;i=i+1)
      {
            cout<<"\nDigite o numero da conta";
            cin>>nc;
            cout<<"\nDigite o valor da transacao";
            cin>>vl;
            cout<<"\nDigite o codico da transacao";
            cout<<"\nD para deposito e R para retirada";
            cin>>codico;
            
              if (codico=="D")
              {
				 blf=blf+vl; 
			  }    
              
              else
              {
			       if  (codico=="R")
			       {
					  blf=blf-vl;  
				   }
			   
			  }    
              
              if  (blf>0) 
              {
				cout<<"\no seu saldo e";  
			    cout<<blf;
			  }
              
              else
              {
			      if  (blf<0)
				  {
				       cout<<"\nNAO HA FUNDOS";  
				  }
			  }
      
      }            
         
  
  }


}
