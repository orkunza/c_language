# include <stdio.h>
# include <conio.h>
/*
  //FONKS�YON TANIMLAMA//
  
  d�n��Tipi fonksiyonAd�(parametreler)
  {
     ��lemler
  }
  
  // int de�er al�r , de�er d�nd�r�r
  
  
*/

int toplama(int sayi1,int sayi2)
{
 	return (sayi1 + sayi2);


}

int main()
{
 int sayi1 ,sayi2;
 printf("Toplama icin iki kez sayi girin : \n");
 scanf("%d%d",&sayi1,&sayi2);
 printf("Sonuc : %d",toplama(sayi1,sayi2));

getch();
return 0;
}

