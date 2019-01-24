# include <stdio.h>
# include <conio.h>

/*
  1 2 3 
  4 5 6	
  7 8 9  // matris yapýsýna benzer
  
  int matris[SATIR][SÜTUN];
*/

int main()
{
int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 

for(int i = 0; i<3;i++){
	for(int j = 0; j<3;j++){
			printf("%d ",matris[i][j]);
    }
    printf("\n");
}
 printf("Array olusturmak icin 9 deger girin:\n");

int deger[3][3] ; 

for(int i = 0; i<3;i++){
	for(int j = 0; j<3;j++){
			scanf("%d",&deger[i][j]);
    }
    printf("\n");
}


for(int i = 0; i<3;i++){
	for(int j = 0; j<3;j++){
			printf("%d ",deger[i][j]);
    }
    printf("\n");
}
getch();
return 0;
}

