

	// SCANF("%d",&x)
	
	// &x ifadesi kullanýcýdan girdi almamýzý saðlar 
		

	
	// ÖRNEK - Yarýçap deðeri alýnýp küre hacmi hesaplama
		
# include <stdio.h> 
# include <conio.h>
# define PI 3.14	

		
		
int main()
{
	float x ;
    float sonuc;
    
	printf("Kure hacmi icin yari capi giriniz: ");
	scanf("%f",&x);
	
	sonuc = ((4/3.0)*PI*(x*x*x));
	
	printf("\nKurenin hacmi %.2f olur.",sonuc);
		
		
	getch();	
	return 0; 
}
