# include <stdio.h>
# include <conio.h>

int main()
{
 int     a = 5;
 int     *ap;
 
 float   b = 3.2;
 float   *bp;
 
 double  c = 3.412;
 double  *cp;
 
 char    d = 'a';
 char    *dp;
 
 int     array[5]={1,2,3,4,5};
 int     *arrayp;
 
  ap = &a;   // ampersand ile a nın pointerını ap ye yazdırdık
  bp = &b;
  cp = &c;
  dp = &d;
 arrayp=&array[1] ; // birincisini istedik
 
 printf("%p adresindeki intin degeri %d dir \n",ap,*ap); //int
 printf("%p adresindeki floatin degeri %f dir \n",bp,*bp); //float
 printf("%p adresindeki doublenin degeri %f dir \n",cp,*cp); //Double
 printf("%p adresindeki charin degeri %c dir \n",dp,*dp); //char
 printf("%p adresindeki 1 deki elemanin degeri %d dir \n",arrayp,*arrayp); //array
 
 
 
 //  Pointer örnek
 
 int i,j=1;
 int *jp1,*jp2=&j;

 jp1 = jp2;
 
 i = ++(*jp2);
 
 *jp2 = (*jp1) + i;
 
 printf("i=%d, j=%d, *jp1=%d,  *jp2=%d\n",i,j,*jp1,*jp2);
 
 
 
 

getch();
return 0;
}

