# include <stdio.h>
# include <conio.h>

/*
  //FONKS�YON TANIMLAMA//
  
  d�n��Tipi fonksiyonAd�(parametreler)
  {
     ��lemler
  }
  
  // Void de�er al�r , de�er d�nd�rmez
  
  
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

