# include <stdio.h> //k�tp�hane ekleme
# include <conio.h>


int main()
{
	// ATAMALAR //
		
	int x;
	int y;
	
 	x = 6 ;
 	y = 4 ;

	
	// ARTTIRMA AZALTMA // (ayn� �ekilde �al���r) 
	
	int i = 4; // i 4 olsun
	
	// Postfix : 	i++ 
	printf("%d\n",i++);  // Ekrana 4 basar sonra 1 artt�r�r..
	
	
	// Prefix : 	++i
	printf("%d\n",i++);  //  1 artt�r�r sonra ekrana 5 basar..
	
	// KISALTMLAR //
	int a = 3;
	
	// de�i�ken  i�lem= de�er
	
	i = i % 3;   	
	i %= 3 ; // k�sa hali
	
	i = i * (a+1);   	
	i *= (a+1) ; // k�sa hali
		
	printf("x:%d\ny:%d\na:%d\n",x,y,a);
	
	getch();
	return 0; 
}
