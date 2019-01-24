# include <stdio.h>
# include <conio.h>

/*
  		  // pointer ile deðer deðiþtirme
*/


void degerDegis(int *a,int *b)
{
	int gecici = *a;
	*a=*b;
	*b=gecici;
	 // deðer göndermesekte ram içinde x ve y nin yeri deðiti

}


int main()
{
int x=5, y=10;
printf("\nx : %d\ny : %d",x,y);

degerDegis(&x,&y); //aampersand ile gönderdik // yeri deðiþti

printf("\nx : %d\ny : %d",x,y);


getch();
return 0;
}
