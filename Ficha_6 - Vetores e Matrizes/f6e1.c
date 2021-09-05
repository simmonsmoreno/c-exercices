/* Desenvolva um programa que receba dois numeros inteiros 
e determine o maior dos dois números, consederando também 
o caso deles serem iguais.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int n1, n2;
	
	printf("Digite dois numeros inteiros >> ");
	scanf("%d %d", &n1, &n2);
	
	n1>n2? printf("\n\n%d eh maior que %d", n1, n2):printf("\n\n%d eh maior que %d", n2, n1);	
		
return 0;	
}
