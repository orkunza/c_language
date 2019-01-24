# include <stdio.h>
# include <conio.h>

/*
  		  // deðer ile deðer deðiþtirme
*/


void degerDegis(int a,int b)
{
	int gecici = a;
	a=b;
	b=gecici;

	printf("a : %d\nb : %d",a,b);

}


int main()
{
int x=5, y=10;

degerDegis(x,y);
printf("\nx : %d\ny : %d",x,y);


getch();
return 0;
}

