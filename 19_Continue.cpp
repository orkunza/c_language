# include <stdio.h>
# include <conio.h>

//�ift say�lar�n toplam�

int main()
{
 int toplam = 0,i,sayi,aralik;

 	 printf("Istenen sayinin icindeki ciftler toplam�!\nSAYI : ");
 	 scanf("%d",&aralik);
 for (i = 1; i<=aralik; i++) {

  if (i % 2 == 1) {
   continue;              // Continueden sonra alttaki i�lemleri yapmaz BA�A G�DER
  }
  toplam += i;
 }
 printf("%d", toplam);

getch();
return 0;
}

