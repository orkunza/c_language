# include <stdio.h>
# include <conio.h>
/*
// WHILE

   ko�ul de�i�ene (FALSE olana kadar) kadar d�ng� tekrar eder
   
   while(TRUE)
   {
   
   
   ko�ul de�i�ikli�i varsa i�erde yap�l�r
   }

*/
int main()
{
	int i = 0;
	
while (i<10)
{
	printf("%d - Bu yazi 10 kez yazcak\n",i);
	i++;
}

// Fakt�riyel hesab�

	int n = 0;
	int fakt=1;
	
	printf("Faktoriyeli istenen sayi : ");
	scanf("%d",&n);
	
while (n != 0)
{
	fakt = fakt*n;
	n--;
}
printf("%d",fakt);


getch();
return 0;
}

