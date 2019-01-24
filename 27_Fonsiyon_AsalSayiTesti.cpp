# include <stdio.h>
# include <conio.h>
/*
  		  // ASAL SAYI OLUP OLMADIÐINI BULAN PROGRAM
  		  
  		  
  		  Asal sayi 2 den kendisine kadar olan sayilarýn hiçbirine bölünmeyen sayýdýr.
*/




int asal (int sayi) 
{
	
 	int i;

 
 	if (sayi==1){
 	return 0;       
        
 }
    else if (sayi==0){
    return 1;  
}    
for (i=2;i<sayi;i++) 
{
    if (sayi % i == 0) 
	{
     return 2;
    }
     
}

 return 3;
}
 
 

int main () {
 int n;
 printf("Asallik testi icin sayi girin: ");
 scanf("%d",&n);
 

 
 if (asal(n) == 0 || asal(n) == 1 || asal(n) == 2){
       printf ("Asal sayi degil.");
       
}
 else {
   printf("Asal sayidir.");
   }    
getch();
return 0;
}

