# include <stdio.h>
# include <conio.h>
# include <stdbool.h>


int main()
{
 int toplam=0;
 int i;
 int sayi;
 
 for(i=0 ;true;i++){
  printf("toplam icin sayiyi giriniz ve -1 basiniz):");
  scanf("%d",&sayi);
  if(sayi == -1) {
   break;
  }
  toplam+=sayi;
  
 }
 
 printf("%d",toplam);

getch();
return 0;
}

