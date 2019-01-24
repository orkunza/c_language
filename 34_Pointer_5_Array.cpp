# include <stdio.h>
# include <conio.h>

int maxbul(int *a,int uzunluk)
{
	int buyuk = a[0];
	
	for (int i =1; i<uzunluk; i++)
	{
		if (a[i]>buyuk)
		buyuk = a[i];
	}
   	
	return buyuk;	
	
}


int main()
{
 int sayilar [5]={1,2,3,4,5};
 int *p = &sayilar[0]; //  int *p = sayilar; bu ayný þey yani baþlangýç noktasýný verir
 
 printf("%u\n",p);
 printf("%u\n",p+1);
 printf("%u\n",p+2);
 printf("%u\n",p+3);
 printf("%u\n",p+4);
 printf("\n");
 printf("%u\n",*(p));     // p[0]
 printf("%u\n",*(p+1));   // p[1]
 printf("%u\n",*(p+2));   // p[2]
 printf("%u\n",*(p+3));   // p[3]
 printf("%u\n",*(p+4));   // p[4]
 
 
 // Burdan çýkan sonuç  *(p+1) == p[1]
 
 ////////////////////////////////////////////
 /*
	Enbüyük sayýyý blulan fonksiyonu yazalým 
	
 */
 
 int degerler[5] = {1,2,3,100,5};
 
 int maks = maxbul(degerler,5);

 printf("\nEn buyuk eleman : %d",maks);



getch();
return 0;
}

