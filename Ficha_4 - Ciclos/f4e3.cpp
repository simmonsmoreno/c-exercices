/*3. Escreva um programa que, dados um numero nao-nulo 
b e um numero inteiro positivo e, calcule a potencia 
de b de ordem e, ou seja, b^e.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int  e, b, n, i, s;
	printf("Introduza um numero nao nulo >> ");
	scanf("%d", &b );
	
	printf("Introduza  um numero inteiro positivo >> ");
	scanf("%d", &e);
	
	//for (i=1; i<=n; i++){
		
		s=pow(b,e);
		printf("\n\n%d^%d --- %d\n", b, e, s);
		//i++;
//	}
	return 0;
}
