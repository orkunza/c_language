# include <stdio.h>
# include <conio.h>
# include <string.h>

// fclose(filep); ile ramden açýlan dosyayý kapar
// fputc(character,filep); characteri dosyaya yazar


int main()
{
	
 char veri[25] = "Orkun ZA 16247070";
 int uzunluk = strlen(veri); // uzunluk bulmak i.iç string.h dan
 int i;	
	
 FILE *filep = fopen("49_Dosyalar_2_fputc.txt","w");
 
 if (filep == NULL)
 {
 	printf("Dosya olusturulamdi!");

 }
 else
 {
 	for(int i =0; i<uzunluk; i++) 
	 {
	   fputc(veri[i],filep);	
	   printf("Yazilan karakter %c\n",veri[i]);
     }

 	
 	printf("Dosya olusturuldu!");
	fclose(filep); 	
 }

getch();
return 0;
}

