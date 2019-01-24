# include <stdio.h>
# include <conio.h>

int main() {
 
 
 /*
 Bool veri Tipi ture yada false
 
 Mantıksal ifadeler dogru iste true 
 Mantıksal ifadeler yanlıs ıse false
 aynı zamanda butun 0 olmayan sayılar 1,132,2500 gibi true deger sayılır
 0 ise falsedir
 if(0) {false}
 
 Mantıksal Oparatorler
 < ---------- kucukmudur a<b seklınde
 > --------- buyukmudur a > b seklınde 
 
 <= -------- kucuk yada esıtmıdır a <= seklınde
 >=  --------- buyuk yada esıt mıdır a >= b seklınde
 == ------- esıtmıdır a==b seklınde
 != ------- esıt degılmıdır a!= b seklınde
 Mantıksal Baglaclar
 
 Bir cok mantıksal ıfadeyi islemi baglayan araclardır
 
 && ---- mantıksal and (ve) baglacı true && true && false gibi baglanabilir && oldugu cumlenın true olması ıcın butun ıfadelerın true olması
 gerekır eger bu cumlenın ııcnde bır tane bıle false varsa o mantıksal cumle false yanlıs olur
 
 
 // ------- mantıksal or yada baglacı true|| true ||false gibi baglanılabılır // oldugu cumlenın true olması ıcın en az bır ıfadenın true olması
 gerekır eger mantıksal or >|| ile baglanmıs cumlenın ıcınde butun ıfadeler false ıse o mantıksal cumle false yanı yanlıs olur
 ! -------- mantıksal not degili oparatoru dogru olan true olan mantıksal ifadeyi yanlıs false yapar 
 sartlı cumleler
 a = x > y ? x: y;
  
  
 Bir kac alıstırma
 
 
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
