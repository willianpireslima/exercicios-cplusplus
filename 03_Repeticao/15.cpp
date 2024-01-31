/*
Os bancos atualizam diariamente as contas de seus clientes. Essa atualização envolve a análise dos depósitos e retiradas de 
cada conta. Numa conta de balanço mínimo, uma taxa de serviço é deduzida se a conta cai abaixo de uma certa quantia especificada. 
Suponha que uma conta particular comece o dia com um balanço de R$ 60,00. O balanço mínimo exigido é R$ 30,00 e se o balanço 
de fim de dia for menor do que isso, uma taxa é reduzida da conta. A fim de que essa atualização fosse feita utilizando computador, é 
fornecido o seguinte conjunto de dados: 
? a primeira linha contém o valor do balanço mínimo diário, quantidade de transações e taxa de serviço; 
? as linhas seguintes contém número da conta, valor da transação e código da transação (depósito ou retirada); 
Escrever um algoritmo que: 
? calcule o balanço (saldo/débito) da conta ao fim do dia (se o resultado for negativo, isto significa insuficiência de 
fundos na conta); 
? escreva, para cada conta, o seu número e o balanço calculado. Se não houver fundos, imprima o número da conta e a 
m nsag m “NÃO HÁ FUNDOS”
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
