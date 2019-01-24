# include <stdio.h> //kütpühane ekleme
# include <conio.h>


int main()
{
	// ATAMALAR //
		
	int x;
	int y;
	
 	x = 6 ;
 	y = 4 ;

	
	// ARTTIRMA AZALTMA // (ayný þekilde çalýþýr) 
	
	int i = 4; // i 4 olsun
	
	// Postfix : 	i++ 
	printf("%d\n",i++);  // Ekrana 4 basar sonra 1 arttýrýr..
	
	
	// Prefix : 	++i
	printf("%d\n",i++);  //  1 arttýrýr sonra ekrana 5 basar..
	
	// KISALTMLAR //
	int a = 3;
	
	// deðiþken  iþlem= deðer
	
	i = i % 3;   	
	i %= 3 ; // kýsa hali
	
	i = i * (a+1);   	
	i *= (a+1) ; // kýsa hali
		
	printf("x:%d\ny:%d\na:%d\n",x,y,a);
	
	getch();
	return 0; 
}
