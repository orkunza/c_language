# include <stdio.h>
# include <conio.h>

// fibonacci serisi;
// 1 1 2 3 5 8 13 ...


int main()
{
 	int ilkSayi =1;
 	int ikinciSayi =1;
 	int adim ;
 	
 	printf("===istenen adimda fibonacci serisi alma===\n");
 	printf("istenen adim sayisi : ");
 	scanf("%d",&adim);
 	
 	printf("%d \n%d \n",ilkSayi,ikinciSayi);
 	
 	for(int i =0;i<(adim-2);i++)  // adim -2 olay� ba�ta haz�r olarak yazd�r�lan 2 de�er i�in
 	{
 		int temp = ikinciSayi;   // de�i�ken de�i�tirerek toplama
 		ikinciSayi += ilkSayi;
 		ilkSayi = temp;
 		
 		printf("%d \n",ikinciSayi);
	 }
 
 
 
 
 
 
 

getch();
return 0;
}

