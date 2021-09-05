/*4. Escreva um programa que leia um numero inteiro 
e calcule o seu factorial. 
Exemplos: 4! = 4 * 3 * 2 * 1 = 24, e 0! = 1.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int  e, cont, i=0;
	
	printf("Introduza  um numero inteiro >> ");
	scanf("%d", &e);
	
	
	printf("\n\n%d!= ", e);
	
	
	do {
		
		cont = i*(i+1);
		
		printf("%d x ", i);
		
		i++;
						
	}while(i<=e);
	
	printf("= %d\n",cont);
	return 0;
}
