

	// SCANF("%d",&x)
	
	// &x ifadesi kullan�c�dan girdi almam�z� sa�lar 
		

	
	// �RNEK - Yar��ap de�eri al�n�p k�re hacmi hesaplama
		
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
