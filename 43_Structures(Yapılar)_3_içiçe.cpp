# include <stdio.h>
# include <conio.h>
# include <string.h>

struct adres
 {
  char mahalle[15];	
  char caddde[20];
  char sokak[15];
 };

struct student
 {
  char isim[15];
  char soyisim[15];
  int numara;
  int yas;
  struct adres konum;
 };


int main()
{

struct student ogrenci1;
strcpy(ogrenci1.isim,"orkun");  // strcpy string.h kütüphanesinden geliyo ve kopyalamaya yarar
strcpy(ogrenci1.soyisim,"za");
ogrenci1.numara = 16247070;
ogrenci1.yas = 21;
strcpy(ogrenci1.konum.mahalle,"AsikVeysel");
strcpy(ogrenci1.konum.caddde,"tipFakultesi");
strcpy(ogrenci1.konum.sokak,"319.sokak");


 printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.konum.mahalle,ogrenci1.konum.caddde,ogrenci1.konum.sokak);

getch();
return 0;
}

