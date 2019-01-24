# include <stdio.h>
# include <conio.h>


struct araba
 {
  char adi[15];	
  int tekerSayisi;
  int vitesSayisi;
  int model;
  int beygir;
  float motor;
 }nissan,subaru;
 
 
int main()
{
  araba nissan = {0}; // oluşan nesnenin tüm değerlerine sıfır verir
  
  printf("%s %d %d %d %d %.2f",nissan.adi,nissan.tekerSayisi,nissan.vitesSayisi,nissan.model,nissan.motor,nissan.beygir);
  
  araba subaru = {"impreza",4,5,2004,412,3.2};
  
  printf("\n%s %d %d %d %d %.2f",subaru.adi,subaru.tekerSayisi,subaru.vitesSayisi,subaru.model,subaru.beygir,subaru.motor);
  
getch();
return 0;
}

