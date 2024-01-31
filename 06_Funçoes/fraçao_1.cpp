#include <iosream>
using namespace std;


class fracao {
	
	private:
		int n,d;
		int mdc ()const;
        void reduz (); //simplica a fraçao
	public

		void setN (int)
		bool setD (int) //D !=0;
		
		int  getN ()const;
		int  getD ()const;
	    
	    static fracao soma       (fracao& ,fracao&);
	    static fracao subtrai    (fracao& ,fracao&);
		static fracao multiplica (fracao& ,fracao&);
	    static fracao divide     (fracao& ,fracao&);
	};
	
	
