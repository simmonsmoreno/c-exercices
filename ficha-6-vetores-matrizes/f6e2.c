/* Desenvolva um programa que dado um numero ele verifica se ele é par ou impar.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int n1;
	
	printf("Digite um numero inteiro >> ");
	scanf("%d", &n1);
	
	n1%2 == 0? printf("\n\n%d eh par", n1):printf("\n\n%d eh impar", n1);	
		
return 0;	
}
