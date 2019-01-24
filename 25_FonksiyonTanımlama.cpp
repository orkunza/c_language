# include <stdio.h>
# include <conio.h>

/*
  //FONKSÝYON TANIMLAMA//
  
  dönüþTipi fonksiyonAdý(parametreler)
  {
     Ýþlemler
  }
  
  // Void deðer alýr , deðer döndürmez
  
  
*/

void hataMesaji(int hata)
{
 	 printf("Hata %d negatif bir sayi!" ,hata);
}


int main()
{
 	int x ;
 	printf("Negatif olmayan sayi giriniz : ");
 	scanf("%d",&x);
 	if(x<0) hataMesaji(x);
 	else printf("Tesekkurler");


getch();
return 0;
}

