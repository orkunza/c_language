# include <stdio.h>
# include <conio.h>

//çift sayýlarýn toplamý

int main()
{
 int toplam = 0,i,sayi,aralik;

 	 printf("Istenen sayinin icindeki ciftler toplamý!\nSAYI : ");
 	 scanf("%d",&aralik);
 for (i = 1; i<=aralik; i++) {

  if (i % 2 == 1) {
   continue;              // Continueden sonra alttaki iþlemleri yapmaz BAÞA GÝDER
  }
  toplam += i;
 }
 printf("%d", toplam);

getch();
return 0;
}

