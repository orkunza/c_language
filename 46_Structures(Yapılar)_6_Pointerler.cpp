# include <stdio.h>
# include <conio.h>
# include <string.h>

struct student
 {
  char isim[20];
  char soyisim[20];
  int numara;

 };
 
 
int main()
{	


 struct student *tut;
 struct student ogrenci1;

 strcpy(ogrenci1.isim,"orkun");
 strcpy(ogrenci1.soyisim,"za");
 ogrenci1.numara=16247070;
 
 tut = &ogrenci1;
 
 printf("%s %s %d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
 printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);  
 
 // *tut.isim == tut->isim
 
getch();
return 0;
}

