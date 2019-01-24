# include <stdio.h>
# include <conio.h>

//MATRÝS SUTUN TOPLAMA


int main()
{

int matris[3][3] ; 

for(int i = 0; i<3;i++){
	for(int j = 0; j<3;j++){
			scanf("%d",&matris[i][j]);
    }
    printf("\n");
}


for(int i = 0; i<3;i++){
	for(int j = 0; j<3;j++){
			printf("%d ",matris[i][j]);
    }
    printf("\n");
}


printf("\n");
int sum;

for(int j = 0; j<3;j++){
	for(int i = 0; i<3;i++){
			sum += matris[i][j];
    }
    printf("%d ",sum);
    sum = 0;
}




getch();
return 0;
}

