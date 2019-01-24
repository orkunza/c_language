# include <stdio.h>
# include <conio.h>

int main()
{
	
 FILE *filep ;
 filep = fopen("50_Dosyalar_2_fputs_string.txt","a");
 char text[256];



 if (filep == NULL)
 {
 	printf("Dosya olusturulamdi!");

 }
 else
 {
 	printf("Kelime aziniz : ");
 	fgets(text,256,stdin); // fgets enter denmeden yazi almayi býrakmaz , stdin = standart veri giriþi demek
 	
 	fputs(text,filep);
 	
 	printf("Dosya olusturuldu!");
 
	fclose(filep); 	
 }


getch();
return 0;
}

