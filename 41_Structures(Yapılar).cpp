# include <stdio.h>
# include <conio.h>
/*
  // STRUCT 
  
  kullanýmý;
  
  struct etiketAdi{
  		 deðiþkentipi deðiþken1;
  		 deðiþkentipi deðiþken2;
  		 deðiþkentipi deðiþken3;
  		 deðiþkentipi deðiþken4;
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
 }/*Bu arayada nesne yazýlabilir ama oluþturmaz sadece main içinde struct yazmadan kullanmaya izin verir*/;

int main()
{
struct student orkun = {"orkun","za",16247070,21}; // nesne oluþturma

printf("%s %s %d %d",orkun.isim,orkun.soyisim,orkun.numara,orkun.yas); //kullanma







;getch();
return 0;
}

