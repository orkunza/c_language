# include <stdio.h>
# include <conio.h>

// DOSYA ÝÞLEMLERÝ
// FILE *filep
/*

   FILE *filep = fopen("dosya_adi","acilma_modu");
 
   Modlar
   "w" = Yazma , Yoksa oluþturur ve varsada yine üstüne yazmayý açar
   "r" = Okuma , okuma izni verir.yoksa (null) yazar.
   "a" = Yazma ,içindeki deðerleri deðiþtirmeden kaydeder.
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

