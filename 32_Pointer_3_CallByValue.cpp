# include <stdio.h>
# include <conio.h>

/*
  		  // de�er ile de�er de�i�tirme
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

