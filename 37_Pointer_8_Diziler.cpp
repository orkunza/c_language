# include <stdio.h>
# include <conio.h>


// POINTER ARRAYLER�

char *gunismi(char *gundizisi[],int uzunluk, int hangigun)
{
	if (hangigun >= 1 && hangigun <= 7)
	   return gundizisi[hangigun-1];
	else 
       return NULL; // yanl�� hi� bi�ey bast�rmama garantisi
	
	
}



int main()
{
 
 char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
 
 char *p = gunismi(gunler,7,5);
 
 if (p == NULL)
 printf("NULL");
 else
 printf("%s",p);





getch();
return 0;
}

