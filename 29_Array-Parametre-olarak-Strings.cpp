# include <stdio.h>
# include <conio.h>
# include <string.h>  // String k�t�phanesi



/*
char isim[]="orkun";
'o'
'r'
'k'
'u'
'n'
'\0'   olarak depo edilir. \0 da bitti�ini g�stermek i�in kendi ekler


*/

int uzunlukBul(char name[])  // array string uzunlu�u bulal�m
{
	int uzunluk;
	
	for(int i= 0; name[i] != '\0';i++) 
	{
		uzunluk++;
	}
	return uzunluk;
}

int main()
{
char isim[]="orkun";


printf("%d",uzunlukBul(isim));


    
    
    
    
    
    

getch();
return 0;
}

