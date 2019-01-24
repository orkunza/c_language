# include <stdio.h> 
# include <conio.h>	
				
int main()
{
	// bool veri tipi 0 yada 1 olur.
	
	// if elif else
	
	int  vize;
	int final;
	int ote;
	float ortalama;
	char durum ;
	
	
	printf("Vize  notunuzu girin\n");
	scanf("%d",&vize);
	
	printf("Final notunuzu girin\n");
	scanf("%d",&final);
	
	printf("Varsa oteleme notunuzu girin\n");
	scanf("%d",&ote);
	
	
	
	
	ortalama = ((vize*0.4) + (final*0.6) )+ ote;
	
	printf("Ortalama : %.2f",ortalama);
	printf("\nDurum: ");
	
	
	if(ortalama>=90)
	{
		printf("A1");
	}
	else if(ortalama>=80)
	{
		printf("A2");
	}
	else if(ortalama>=75)
	{
		printf("B1");
	}
	else if(ortalama>=70)
	{
		printf("B2");
	}
	else if(ortalama>=65)
	{
		printf("C1");
	}
	else if(ortalama>=60)
	{
		printf("C2");
	}
	else if(ortalama>=55)
	{
		printf("D1");
	}
	else if(ortalama>=50)
	{
		printf("D2");
	}
	else if(ortalama>=40)
	{
		printf("E");
	}
	else
	{
		printf("F");
	}
	
	
	
	getch();
	return 0; 
}
