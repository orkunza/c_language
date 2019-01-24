# include <stdio.h>
# include <conio.h>

/*


switch(operasyon){
	 
case opDegeri 1 :
    iþlemler
    break;
    
case opDegeri 2  :
	iþlemler
	break;
	
case opDegeri 3 :
	iþlemler
	break;
		
default:              // hep yazýlmasý gerekmez		
		
	}
*/


int main()
{
 int islem;
 int bakiye=1000;
 int tutar;
 printf ("Islem seciniz\n1 : Para Cekme\n2 : Para Yatirma\n3 : Havale\n4 : Kart Iade\n") ;
 printf ("Islem seciniz : ");
 scanf("%d" , &islem) ;
 switch (islem) 
 {
 case 1 :
 printf ("Bakiyeniz : %d\n" , bakiye);
 printf ("Istediginiz Tutar :");
 scanf("%d" , &tutar);
 if (tutar>bakiye) 
 printf ("Yeterli bakiyeniz yok.\n") ;
 else 
 {
 bakiye -= tutar ;
 printf ("Islem tamamlandi. Kalan bakiyeniz %d" , bakiye);
 }
 break;
 case 2 :
 printf ("Bakiyeniz : %d\n" , bakiye);
 printf ("Yatiracaginiz Tutar :");
 scanf("%d" , &tutar);
 bakiye += tutar ;
 printf ("Islem tamamlandi. Yeni bakiyeniz %d" , bakiye);
 break;
 case 3 :
 printf ("Bakiyeniz : %d\n" , bakiye);
 printf ("Havale Edeceginiz Tutar :");
 scanf("%d" , &tutar);
 if (tutar>bakiye) 
 printf ("Yeterli bakiyeniz yok.\n") ;
 else  
 {
 bakiye -= tutar ;
 printf ("Islem tamamlandi. Kalan bakiyeniz %d" , bakiye);
 }
 break ;
 
 case 4 :
 printf ("Kartiniz iade edildi.");
 default :
 printf ("Bilinmeyen islem.");
 
 }
 
 getch();
 return 0;
}
