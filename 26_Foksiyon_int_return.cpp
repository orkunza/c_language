# include <stdio.h>
# include <conio.h>
/*
  //FONKSÝYON TANIMLAMA//
  
  dönüþTipi fonksiyonAdý(parametreler)
  {
     Ýþlemler
  }
  
  // int deðer alýr , deðer döndürür
  
  
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

