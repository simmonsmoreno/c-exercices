#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main ()
{
	float a, b, c, x1, x2, delta;
		
	printf("\t\tHello estudantes de matematica\n \tHoje vamos resolver as equacoes do segundo grau!!\n");
	printf("\t\tax2 + bx + c = 0\n\n\n");
	
	printf ("\n\nIntroduza o valor de a\n\n");
	scanf ("%f", &a);
	
	printf ("\n\nAgora introduza o valor de b\n\n");
	scanf ("%f", &b);
	
	printf ("\n\nPor fim introduza o valor de c\n\n");
	scanf ("%f", &c);
	
	if( a!= 0){
		
			delta = (b*b)-4*a*c;
				
				if( delta == 0){
					
					x1= (-b+ sqrt(delta))/(2*a);
					printf("Delta igual a 0 \n");
					printf("x1 e x2 = %.2f", x1);
					
				} else {
								if (delta >0){
									x1 = (-b + sqrt (delta))-(2*a);
									x2 = (-b - sqrt (delta))-(2*a);
									printf("Delta maior que 0 \n");
									printf("x1 = %.2f\n", x1);
									printf("x2 = %.2f\n", x2);
								} else {
									
									printf("Delta menor que 0 \n");
									printf("Nao existe raiz real !\n");
								
								}


				}
		}

getch();
system ("pause");	
return 0;
}

