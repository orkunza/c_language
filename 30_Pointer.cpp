# include <stdio.h>
# include <conio.h>

/*
  		  // POINTER //
  		  
  		 int j;
   		  scanf("%d",&j);  // ampersand j , j nin adres bilgisini ver demek 
*/
int main()
{
 	int i = 5;
 	
 	int *p = &i;
	 
	  printf(" %d \n",i);	 	//  5
	  printf(" %p \n",p);		//  000000000062FE44
	  printf(" %u \n",p);		//  6487620
	  printf(" %p \n",*p);		//  0000000000000005
	  printf(" %d \n",*p);		//  5
	  

 	
 	




getch();
return 0;
}

