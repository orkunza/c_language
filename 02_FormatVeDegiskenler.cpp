# include <stdio.h> //k�tp�hane ekleme
# include <conio.h>

int main()
{
	int    a1 =   42; // %d tan�mlar
	char   b1 =   66; // %c tan�mlar
	char   b2 =  'B'; // %c tan�mlar, %d olarak istenirse ascii kar��l�� olan say�y� yazar
	float  c1 =  4.2; // %f tan�mlar
	double d1 = 0.21; // %f double de�i�kenini de tan�mlar
	                  // %s string tan�mlar
	
	printf("%d %c %d %f %f %s \n",a1,b1,b2,c1,d1,"Hello World");
	
	
	
	
	getch();
	return 0; 
}
