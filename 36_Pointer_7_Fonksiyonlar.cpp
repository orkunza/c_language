# include <stdio.h>
# include <conio.h>
# include <string.h>

/*
int *p;
printf("%d",*p);  tan�mlamadan yazarsak  .exe �al��may� durdurur!

int *p = NULL;  // bununla g�vence alt�nda olur 
int *p = 0;	    // bununla g�vence alt�nda olur 

*/

char *dondur(char *p,int indeks)
{	
	int uzunluk = strlen(p);
	
	if (indeks > uzunluk)
	return NULL;
	else return p+indeks;
}


int main()
{
 char dizi[]="yazilim";
 char *p = dondur(dizi,2); // 2 �imdi 10 olsa <Null> basar

if(p==NULL) 
printf("Pointer null \n");
else printf("%s",p);





getch();
return 0;
}

