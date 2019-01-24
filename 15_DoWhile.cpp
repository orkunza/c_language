# include <stdio.h>
# include <conio.h>


/*
   // DO WHILE - Koþulu iþlemlerden sonra kontrol ediyor
   
   do 
   {
   
   iþlemler
   
   }
   while(koþul);
  

*/
int main()
{
	int n=10;
 	
	do {
		printf("%d\n",n);
		n--;
		
	}
	while(n>0);
	
	
	// Rakamlarý toplamýný bulan program
	
	int m,hane = 0, toplam = 0;
	printf("sayiyi giriniz : ");
	scanf("%d",&m);
	
	do{
		toplam = toplam +  (m % 10);
		hane++;
		m = m / 10;
	}
	while(m>0);
	printf("Rakamlar toplami %d \n %d Basamakli",toplam,hane);





getch();
return 0;
}

