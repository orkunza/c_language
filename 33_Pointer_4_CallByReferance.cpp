# include <stdio.h>
# include <conio.h>

/*
  		  // pointer ile de�er de�i�tirme
*/


void degerDegis(int *a,int *b)
{
	int gecici = *a;
	*a=*b;
	*b=gecici;
	 // de�er g�ndermesekte ram i�inde x ve y nin yeri de�iti

}


int main()
{
int x=5, y=10;
printf("\nx : %d\ny : %d",x,y);

degerDegis(&x,&y); //aampersand ile g�nderdik // yeri de�i�ti

printf("\nx : %d\ny : %d",x,y);


getch();
return 0;
}
