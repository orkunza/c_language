# include <stdio.h>
# include <conio.h>
/*
  // STRUCT 
  
  kullan�m�;
  
  struct etiketAdi{
  		 de�i�kentipi de�i�ken1;
  		 de�i�kentipi de�i�ken2;
  		 de�i�kentipi de�i�ken3;
  		 de�i�kentipi de�i�ken4;
  		 ...
  		 ...
  		 ... };


*/

struct student
 {
  char isim[15];
  char soyisim[15];
  int numara;
  int yas;
 }/*Bu arayada nesne yaz�labilir ama olu�turmaz sadece main i�inde struct yazmadan kullanmaya izin verir*/;

int main()
{
struct student orkun = {"orkun","za",16247070,21}; // nesne olu�turma

printf("%s %s %d %d",orkun.isim,orkun.soyisim,orkun.numara,orkun.yas); //kullanma







;getch();
return 0;
}

