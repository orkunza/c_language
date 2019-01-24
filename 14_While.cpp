# include <stdio.h>
# include <conio.h>
/*
// WHILE

   koþul deðiþene (FALSE olana kadar) kadar döngü tekrar eder
   
   while(TRUE)
   {
   
   
   koþul deðiþikliði varsa içerde yapýlýr
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

// Faktöriyel hesabý

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

