# include <stdio.h>
# include <conio.h>

struct student
 {
  char isim[20];
  char soyisim[20];
  int numara;

 };
 
 
void goster(struct student a )
 {
	printf("\n%s %s %d",a.isim,a.soyisim,a.numara);
 }
 
 
struct student degerAl() // fonksiyon struct değer döndürsün diye int yerine struct student olarak açtık
{
	struct student yeni;
	printf("bilgileri girin : ");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	return yeni ;
}
 
 
int main()
{
 struct student ogrenci1 = degerAl();
 
 goster (ogrenci1);
 

 
 
getch();
return 0;
}

