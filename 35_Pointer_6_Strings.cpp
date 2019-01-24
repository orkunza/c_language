# include <stdio.h>
# include <conio.h>
# include <string.h>


int benimstrlen(char *p)
{
	int uzunluk = 0;

 	for(int i =0; p[i] != '\0'; i++) 
	 {
	 	uzunluk++;
     }
	  	return uzunluk;
}



int main()
{
 	char yazi[] = "orkun"; 
 	
 	char *p = yazi;
 	
 	printf("\n %s",yazi);
	printf("\n %s",p);
	printf("\n %s",p+2); // baþladýðý yerden \0 görene kadar yazar.
 	
 	/////////////////////////////////////
 	/*
	  String uzunluðu veren fonksiyon normalde string.h içinde strlen() olarak var ama biz yazalým
    */
    
    char isim[] = "orkun"; 
    printf("\n %d",benimstrlen(isim));

    
    
getch();
return 0;
}

