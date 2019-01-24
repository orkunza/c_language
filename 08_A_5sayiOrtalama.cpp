		
	// ÖRNEK - 5 Sayýnýn Aritmetik ortalamasý
		
# include <stdio.h> 	
# include <conio.h>
				
int main()
{
	float a,b,c,d,e ;
	float ortalama;
    
    printf("5 sayinin ortalamasi\nilk sayiyi girip enter'e basin\n");
    
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    ortalama = ((a+b+c+d+e)/5) ;

	printf("5 sayinin ortalamasi : %.2f ",ortalama);	
		
	getch();	
	return 0; 
}
