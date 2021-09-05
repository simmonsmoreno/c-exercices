/*1. Escreva um programa que dado um numero escreva 
a sua tabuada usando um ciclo. Segue-se um exemplo 
da interacao com o computador. 
Introduza um numero menor do que 10: 7 
Tabuada 
7 x 1 = 7 
7 x 2 = 14 
7 x 3 = 21 
7 x 4 = 28 
7 x 5 = 35 
7 x 6 = 42 
7 x 7 = 49 
7 x 8 = 56 
7 x 9 = 63 
7 x 10 = 70*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int n, i;
	printf("Introduza um numero menor do que 10 >> ");
	scanf("%d", &n);
	printf("\n\nTabuada numero %d:\n\n", n);
	
	for (i=1; i<=10; i++){
		
		printf("%d x %d = %d\n", n, i, n*i);
		//i++;
	}
	return 0;
}
