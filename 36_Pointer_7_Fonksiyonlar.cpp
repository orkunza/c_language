# include <stdio.h>
# include <conio.h>
# include <string.h>

/*
int *p;
printf("%d",*p);  tanýmlamadan yazarsak  .exe çalýþmayý durdurur!

int *p = NULL;  // bununla güvence altýnda olur 
int *p = 0;	    // bununla güvence altýnda olur 

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
 char *p = dondur(dizi,2); // 2 þimdi 10 olsa <Null> basar

if(p==NULL) 
printf("Pointer null \n");
else printf("%s",p);





getch();
return 0;
}

