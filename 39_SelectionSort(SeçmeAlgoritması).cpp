# include <stdio.h>
# include <conio.h>



#define MAX 50
void selectionSort(int array[],int size)
{
	int minimumindex;
	
	for(int i =0; i<size; i++) 
	{	
		minimumindex=i;
		
		for(int j =i; j<size; j++) 
		{
	        if(array[j]<array[minimumindex])
			  {
			  minimumindex=j;	  
			  }
			  
			  int temp=array[i];
    		  array[i]=array[minimumindex];
    		  array[minimumindex]=temp;
		}
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
	   
	  selectionSort(scanarray,size);
	  
	  
      for ( i=0; i<size ;i++)
	  {
       printf("%d ",scanarray[i]);
      }



getch();
return 0;
}


