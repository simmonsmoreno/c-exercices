/*2. Escreva um programa que, dado um numero inteiro n, 
escreva todas as potencias de 2 menores que n*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int n, i, s;
	printf("Introduza um numero inteiro >> ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++){
		
		s=pow(i,2);
		printf("%d---%d\n", i, s);
		//i++;
	}
	return 0;
}
