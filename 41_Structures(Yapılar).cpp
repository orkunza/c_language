# include <stdio.h>
# include <conio.h>
/*
  // STRUCT 
  
  kullanımı;
  
  struct etiketAdi{
  		 değişkentipi değişken1;
  		 değişkentipi değişken2;
  		 değişkentipi değişken3;
  		 değişkentipi değişken4;
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
 }/*Bu arayada nesne yazılabilir ama oluşturmaz sadece main içinde struct yazmadan kullanmaya izin verir*/;

int main()
{
struct student orkun = {"orkun","za",16247070,21}; // nesne oluşturma

printf("%s %s %d %d",orkun.isim,orkun.soyisim,orkun.numara,orkun.yas); //kullanma







;getch();
return 0;
}

