# include <stdio.h>
# include <conio.h>

int carp(int matris[],int size)  // Tek boyut
{
	int carpim =1;
	
	for (int m=0;m<size;m++)
	{
		carpim *= matris[m];
	}
	return carpim ;
}

void yazdir(int dizimiz[][4],int boyut)   // iki boyut  - Geri bilgi gelmiyeceði için void yaptýk
{               						// Ne yazkki ikinci array boyutunu bizim yazmamýz gerek
	

	for(int k=0;k<boyut;k++) 
 	{
 		for(int l=0;l<4;l++) 
		 {
		 	printf("%d",dizimiz[k][l]);
		 	printf(" ");
		 }
		 printf("\n");

	}
}

int main()
{
 	int sayilar[5] = {1,2,3,4,5};   // Tek boyut
 	
 	printf("%d",carp(sayilar,5));
 	
 	
 	///////////////////////////////////////////////////
 	
 	int array[3][4];        // iki boyut
 	
 	printf("\nMatrisin satirini doldurunuz : \n");
 	
 	
 	for(int i=0; i<3; i++) {
 		for(int j=0; j<4; j++) 
		 {
		 	scanf("%d",&array[i][j]);
		 }
		 printf("\n");
    }
 	  yazdir(array,3);

 	
 	

getch();
return 0;
}

