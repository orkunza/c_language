# include <stdio.h>
# include <conio.h>
/*
    // Bubble Sort
    // Kabarcýk Sýralamasý
    
    3 4 12 1 34 16

*/

#define MAX 50

void bubbleSort(int array[],int size)
{
	for(int i =0; i<size; i++) 
	{
		for(int j =1; j<(size-i); j++) 
		{
			  if(array[j-1]>array[j])
			  {
			  int temp=array[j];
    		  array[j]=array[j-1];
    		  array[j-1]=temp;
			  }
		}
   }	
}


int main()
{
      int scanarray[MAX], size;
      int i;
      printf("Kac elemanli : ");
      scanf("%d",&size);

      for (i=0; i<size ;i++)
	  {
       scanf("%d",&scanarray[i]);
      }
	   
	  bubbleSort(scanarray,size);
	  
      for ( i=0; i<size ;i++)
	  {
       printf("%d ",scanarray[i]);
      }



getch();
return 0;
}

