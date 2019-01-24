		
	// ÖRNEK - ax^2+bx+c=0 kök bulma
		
# include <stdio.h> 
# include <conio.h>	
# include <math.h> 
				
int main()
{
	float a,b,c;
	float x1,x2,delta;
    
    printf("ax^2+bx+c=0\nYukardaki denklemin koklerini bulmak icin\n\n");
    
    printf("ax^2 icin a : ");
    scanf("%f",&a);
    printf("bx icin b : ");
    scanf("%f",&b);
    printf("c icin c : ");
    scanf("%f",&c);
	
	delta = b*b-4*a*c;
	x1 = (-b+(sqrt(delta)))/(2*a);
	x2 = (-b-(sqrt(delta)))/(2*a);
	
    

	printf("\nDelta : %.2f ",delta);
	printf("\nX 1 : %.2f ",x1);
	printf("\nX 2 : %.2f ",x2);	
		
	getch();	
	return 0; 
}
