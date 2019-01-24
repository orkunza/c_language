# include <stdio.h>
# include <conio.h>



#define MAX 50
void insertionSort(int array[],int size)
{
	int element;
	int i,j;
	
	for(i =1; i<size; i++) 
	{	
		element=array[i];
		
		j = i-1;
		
		while(j >=0 && array[j]>element) 
		{
		 array[j+1]	= array[j];
		 j--;			
        }
        
        
	   array[j+1]	= element;
   }	
}






int main()
{
      int scanarray[MAX], size;
      int i;
      printf("Kac elemanli : ");
      scanf("%d",&size);
	  printf("aralarinda baosluk birakarak yaziniz ve entere basýn \n");
	  
      for (i=0; i<size ;i++)
	  {
       scanf("%d",&scanarray[i]);
      }
	   
	  insertionSort(scanarray,size);
	  
	  
      for ( i=0; i<size ;i++)
	  {
       printf("%d ",scanarray[i]);
      }



getch();
return 0;
}

