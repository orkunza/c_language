# include <stdio.h>
# include <conio.h>

// DOSYA ��LEMLER�
// FILE *filep
/*

   FILE *filep = fopen("dosya_adi","acilma_modu");
 
   Modlar
   "w" = Yazma , Yoksa olu�turur ve varsada yine �st�ne yazmay� a�ar
   "r" = Okuma , okuma izni verir.yoksa (null) yazar.
   "a" = Yazma ,i�indeki de�erleri de�i�tirmeden kaydeder.
   "w+"
   "r+"
   "a+"


*/

int main()
{
 FILE *filep = fopen("48_Dosyalar_1_fopen.txt","w");
 
 
 if (filep == NULL)
 {
 	printf("Dosya olusturulamdi!");

 }
 else
 {
 	printf("Dosya olusturuldu!");	
 }






getch();
return 0;
}

