# include <stdio.h>
# include <conio.h>

int main() {
 
 int vize1,vize2,final;
 float notort;
 
 printf("1. vize notuzu giriniz: ");
 scanf("%d",&vize1);
 
 printf("2. vize notuzu giriniz: ");
 scanf("%d",&vize2);
 
 printf("Final notuzu giriniz: ");
 scanf("%d",&final);
 
 
 notort = (vize1+vize2+final)/3;
 
    if(notort>=85 && notort<=100) printf("Ders Basari Notunuz: AA");
    else if(notort>=75 && notort<85) printf("Ders Basari Notunuz: BA");
    else if(notort>=70 && notort<75) printf("Ders Basari Notunuz: BB");
    else if(notort>=65 && notort<70) printf("Ders Basari Notunuz: CB");
    else if(notort>=60 && notort<65) printf("Ders Basari Notunuz: CC");

    else{
   printf("Uzgunum. Dersten Kaldiniz.");
    if(notort>=40 && notort<50) printf("Ders Basari Notunuz: DD");
    else if(notort>=30 && notort<40) printf("Ders Basari Notunuz: FD");
    else if(notort>=0 && notort<30) printf("Ders Basari Notunuz: FF");
  }
  getch();
  return 0;
 }

