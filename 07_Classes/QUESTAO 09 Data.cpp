#include <iostream>
#include <math.h>
using namespace std;

class Data   {
	
	private:
		int dia, mes ,ano;
	
	public:
		void   setData    (int AuxDia,int AuxMes,int AuxAno); 
		void   getData    ();
		bool   validaData (int AuxDia,int AuxMes,int AuxAno);
	
		int    calculaDiasEntreDatas(int dia1,int mes1,int ano1, 
							         int dia2,int mes2,int ano2);
	
    	string DeterminaDiaSemana   (int AuxDia,int AuxMes,int AuxAno);
	
	
	
	
	
	};

void Data ::  setData    (int AuxDia,int AuxMes,int AuxAno) {
	
	dia = AuxDia;
	mes = AuxMes;
	ano = AuxAno;
	
	
	}

void Data ::  getData    () {
	
	cout << dia << "/" << mes << "/" << ano;
	
	}



bool Data ::  validaData (int AuxDia,int AuxMes,int AuxAno) {
	
	bool retorno;
	
	
	if ( (AuxDia >  0    && AuxDia < 32) &&
	     (AuxMes >  0    && AuxMes < 13) &&
         (AuxAno >  1900 && AuxAno < 2040) )
         {
		 	retorno = true;
		 }
		
		else {
			
		retorno = false;	
		}
		
		
	return retorno;
	}



string Data :: DeterminaDiaSemana(int AuxDia,int AuxMes,int AuxAno) {
	
	
	// Formula para o dia da semana
	//Dia + Chave do mês + Chave do ano - Maior múltiplo de 7 = Dia da semana
	
	int ChaveDoMes,ChaveDoAno,MaiorMultiploDeSete;
	
	
	// chave do mes
	
	switch (AuxDia) {
		
		case 1:
			ChaveDoMes = 1; 
		    break;
		
		case 2:
			ChaveDoMes = 4; 
		    break;
		
		case 3:
			ChaveDoMes = 4; 
		    break;
		
		case 4:
			ChaveDoMes = 0; 
		    break;
		
		case 5:
			ChaveDoMes = 2; 
		    break;
		
		case 6:
			ChaveDoMes =5; 
		    break;
		
		case 7:
			ChaveDoMes = 0; 
		    break;
		
		case 8:
			ChaveDoMes = 3; 
		    break;
		
		case 9:
			ChaveDoMes = 6; 
		    break;
		
		case 10:
			ChaveDoMes = 1;
		    break;
		
		case 11:	
        	ChaveDoMes = 4; 
		    break;
		
		case 12:
			ChaveDoMes = 6; 
		    break;
			
				
		}
	
	//chave do ano
	
	ChaveDoAno = AuxAno / 4;
	ChaveDoAno = ChaveDoAno + (AuxAno % 7);
	ChaveDoAno = ChaveDoAno % 7;
	
	// maior mulltipo de 7
	
	for (int i = 0; i < AuxDia+ ChaveDoMes + ChaveDoAno; i++) {
		
		if ( i % 7 == 0 ) 
			MaiorMultiploDeSete = i;
		}
	
	// retornar o dia da semana
	
	int Formula = (AuxDia + ChaveDoMes + ChaveDoAno) - MaiorMultiploDeSete;
	
	string DiaDaSemana;
	
	switch (Formula) {
		
		case 1:
			DiaDaSemana = "Domingo";
		    break;
		
		case 2:
			DiaDaSemana = "Segunda-feira";
		    break;
		
		case 3:
			DiaDaSemana = "Terca-feira"; 
		    break;
		
		case 4:
			DiaDaSemana = "Quarta-feira"; 
		    break;
		
		case 5:
			DiaDaSemana = "Quinta-feira"; 
		    break;
		
		case 6:
			DiaDaSemana = "Sexta-feira";
		    break;
		
		case 0:
			DiaDaSemana = "Sabado";
		    break;
			
				
		}
	
		
	return DiaDaSemana;
	}
	

int  Data ::  calculaDiasEntreDatas(int dia1,int mes1,int ano1, 
							 int dia2,int mes2,int ano2) {

	
	 int diaTotalAno,diaTotalMes,i;

  

    // Pega os dias entre ano1 e ano2
    for(int i = ano1; i < ano2; i++){ 

        // verifica se ano é bissexto ou não
        if(i % 4 == 0){
            diaTotalAno += 366;
        } else {
            diaTotalAno += 365;
        }
    }

   if (mes1 > mes2) {
	
		for(i =mes1 ; i < mes2; i++){ 
        
			diaTotalMes +=30;  
    	}
		
		for(i =mes1 ; i < mes2; i = i + 2 ){ 
        
			diaTotalMes +=1;  
    	}
   
   
	}

   else
	{
	  
	for(i =mes2 ; i < mes1; i++){ 
        
			diaTotalMes +=30;  
    	} 
   	   
	for(i =mes2 ; i < mes1; i = i + 2 ){ 
        
			diaTotalMes +=1;  
    	} 
    }	  	
	
	// a diferença entre os meses
	
	if (mes1 > mes2) {
		
		diaTotalAno = diaTotalAno + diaTotalMes;
		}
	else
		{
		diaTotalAno = diaTotalAno - diaTotalMes;
		}
	
	// a diferença entre os anos
	
	if (dia1 > dia2) {
		
		diaTotalAno = diaTotalAno + (dia1 - dia2);
		
		}
	
	else
		{
		diaTotalAno = diaTotalAno + (dia2 - dia1);
		}
		
	
	
	
	return diaTotalAno ;


	}
	
	


int main () {
	
	int i,dia[2],mes[2],ano[2];
	class Data Obj;   	
	
	for (i=0;i<2;i++) {
	
		do {
			
			cout <<"Digite o dia:  ";
			cin  >>dia[i];
			cout <<"\nDigite o mes:  ";
			cin  >>mes[i];
			cout <<"\nDigite o ano:  ";
			cin  >>ano[i];
	  
			}while (Obj.validaData (dia[i] , mes[i] , ano[i]) == false );
		
	    cout <<"\n";
		Obj.setData    (dia[i] , mes[i] , ano[i]); 
		Obj.getData    ();
		
		
		cout << "\nDia Da Semana = " 
			 <<  Obj.DeterminaDiaSemana (dia[i] , mes[i] , ano[i]);
		
	   	 cout <<"\n\n";
		
		}			
    
	cout << "Diferenca entre os Dias = " 
    	 << Obj.calculaDiasEntreDatas ( dia[0] , mes[0] , ano[0] ,
				                        dia[1] , mes[1] , ano[1]  );
	
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	