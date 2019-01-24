# include <stdio.h>
# include <conio.h>
# include <string.h>  // String kütüphanesi



/*
char isim[]="orkun";
'o'
'r'
'k'
'u'
'n'
'\0'   olarak depo edilir. \0 da bittiðini göstermek için kendi ekler


*/

int uzunlukBul(char name[])  // array string uzunluðu bulalým
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

