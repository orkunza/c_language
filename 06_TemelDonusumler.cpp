# include <stdio.h> //k�tp�hane ekleme
# include <conio.h>


int main()
{
		/*
		
		//OTOMAT�K D�N���M
		
		short int --> int --> float --> long double
		
		short int b�l� float olursa hepsi float olur 
		
		sa� tarafa do�ru bi d�n���m s�z konusu
		
		//MANUEL D�N���M
		
		3.2 say�s�n� int yapmak istersek 3 olur. **Kesirli k�s�m direk at�l�r.
		
		(int)3.2 = 3 olur...
		
		*/
		
		int   x =   3 ;
		float y = 0.1 ;
		
		printf("%f\n",x/y);        // 30.000000 float sonu� verdi
		
		printf("%f\n",2*4.2+4%2);  // 8.400000
		printf("%f\n",12.5/2)   ;  // 6.250000
		printf("%d\n",(int)3.2) ;  // 3
		printf("%f\n",(float)3) ;  // 3.000000
		
	getch();	
	return 0; 
}
