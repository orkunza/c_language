# include <stdio.h>
# include <conio.h>

int main()
{
float sayilar[5];
float ortalama = 0;

printf("5 sayi giriniz \n");

for(int i=0; i<5; i++)
{
	scanf("%f",&sayilar[i]);
} 


printf("\nGirilen sayilar \n");
for(int i=0; i<5; i++)
{
	printf("%.2f\n",sayilar[i]);
} 

printf("\nAritmetik ortalamasi \n");
for(int i=0; i<5; i++)
{
	ortalama += sayilar[i];
} 

printf("%.2f\n",ortalama/5);
getch();
return 0;
}

