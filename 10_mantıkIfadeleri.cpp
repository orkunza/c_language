# include <stdio.h>
# include <conio.h>

int main() {
 
 
 /*
 Bool veri Tipi ture yada false
 
 Mant�ksal ifadeler dogru iste true 
 Mant�ksal ifadeler yanl�s �se false
 ayn� zamanda butun 0 olmayan say�lar 1,132,2500 gibi true deger say�l�r
 0 ise falsedir
 if(0) {false}
 
 Mant�ksal Oparatorler
 < ---------- kucukmudur a<b sekl�nde
 > --------- buyukmudur a > b sekl�nde 
 
 <= -------- kucuk yada es�tm�d�r a <= sekl�nde
 >=  --------- buyuk yada es�t m�d�r a >= b sekl�nde
 == ------- es�tm�d�r a==b sekl�nde
 != ------- es�t deg�lm�d�r a!= b sekl�nde
 Mant�ksal Baglaclar
 
 Bir cok mant�ksal �fadeyi islemi baglayan araclard�r
 
 && ---- mant�ksal and (ve) baglac� true && true && false gibi baglanabilir && oldugu cumlen�n true olmas� �c�n butun �fadeler�n true olmas�
 gerek�r eger bu cumlen�n ��cnde b�r tane b�le false varsa o mant�ksal cumle false yanl�s olur
 
 
 // ------- mant�ksal or yada baglac� true|| true ||false gibi baglan�lab�l�r // oldugu cumlen�n true olmas� �c�n en az b�r �faden�n true olmas�
 gerek�r eger mant�ksal or >|| ile baglanm�s cumlen�n �c�nde butun �fadeler false �se o mant�ksal cumle false yan� yanl�s olur
 ! -------- mant�ksal not degili oparatoru dogru olan true olan mant�ksal ifadeyi yanl�s false yapar 
 sartl� cumleler
 a = x > y ? x: y;
  
  
 Bir kac al�st�rma
 
 
 int a =40;
 int b =41;
 a>b
 a<b
 a >=b
 a <= b
 a != b;
 a == b ;
 
 
 
 int a = 40
 int b = 50
 int c = 60
 int d = 70
 a > c && c <=d && (a > b || b<d)
 !(a >=d>
 */
 int a,b = 20,c =30 ;
 a = b < c ? b: c;
 printf("%d",a);
 
 
 getch();
 return 0;
}
