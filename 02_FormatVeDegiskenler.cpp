# include <stdio.h> //kütpühane ekleme
# include <conio.h>

int main()
{
	int    a1 =   42; // %d tanýmlar
	char   b1 =   66; // %c tanýmlar
	char   b2 =  'B'; // %c tanýmlar, %d olarak istenirse ascii karþýlðý olan sayýyý yazar
	float  c1 =  4.2; // %f tanýmlar
	double d1 = 0.21; // %f double deðiþkenini de tanýmlar
	                  // %s string tanýmlar
	
	printf("%d %c %d %f %f %s \n",a1,b1,b2,c1,d1,"Hello World");
	
	
	
	
	getch();
	return 0; 
}
