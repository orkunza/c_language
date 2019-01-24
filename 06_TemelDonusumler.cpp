# include <stdio.h> //kütpühane ekleme
# include <conio.h>


int main()
{
		/*
		
		//OTOMATÝK DÖNÜÞÜM
		
		short int --> int --> float --> long double
		
		short int bölü float olursa hepsi float olur 
		
		sað tarafa doðru bi dönüþüm söz konusu
		
		//MANUEL DÖNÜÞÜM
		
		3.2 sayýsýný int yapmak istersek 3 olur. **Kesirli kýsým direk atýlýr.
		
		(int)3.2 = 3 olur...
		
		*/
		
		int   x =   3 ;
		float y = 0.1 ;
		
		printf("%f\n",x/y);        // 30.000000 float sonuç verdi
		
		printf("%f\n",2*4.2+4%2);  // 8.400000
		printf("%f\n",12.5/2)   ;  // 6.250000
		printf("%d\n",(int)3.2) ;  // 3
		printf("%f\n",(float)3) ;  // 3.000000
		
	getch();	
	return 0; 
}
