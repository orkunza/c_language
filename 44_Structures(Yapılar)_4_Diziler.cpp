# include <stdio.h>
# include <conio.h>

struct student
 {
  char isim[20];
  char soyisim[20];
  int numara;
 };
 
int main()
{
  struct student ogrenciler[3];	
  int i;
  
  for(i =0; i<3; i++) 
  {
  	printf("\n%d. ogencinin bilgilerini girin : \n",i+1);
	scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);

  }


 for(i =0; i<3; i++) 
  {
  	printf("\n %d. ogencinin bilgilerini : %s %s %d",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
  }

getch();
return 0;
}

