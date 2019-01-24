# include <stdio.h>
# include <conio.h>
# include <string.h>

struct student
 {
  char isim[20];
  char soyisim[20];
  int numara;

 };
 
 
void goster(struct student *p )
 {
	printf(" ogrenci bilgileri \n adi: %s \n soyadi : %s \n numarasi : %d\n",p->isim,p->soyisim,p->numara);
 }
 
 
 struct student *degerAl(struct student *p) 
{
	strcpy(p->isim , "oguz");
	strcpy(p->soyisim , "za");
	p->numara =18247070;
	return p;
}
 
 
int main()
{
  struct student *tut;
  struct student ogrenci1 = {"orkun","za",16247070};
  goster(&ogrenci1);

  tut = degerAl(&ogrenci1);
  printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
  
  
getch();
return 0;
}

