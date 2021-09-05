//Faça um programa que peça os coeficientes de um polinoomio 
//do segundo grau, e retorna as raizes reais, caso existam.

#include <stdio.h>

int main(){
	
	int a, b, c, y;
	
	printf("Introduza o valor de a >> ");
	scanf("%d", &a);
	printf("Introduza o valor de b >> ");
	scanf("%d", &b);
	printf("Introduza o valor de c >> ");
	scanf("%d", &c);
	
	y = a*(b*b) + c - 10;
	
	printf("y = %d\n", y);
	
	if(y<0){
		printf("|y| = %d\n", abs(y));
		printf("y x |y| = %d", (y*abs(y)));
	}else{
		printf("Raiz quadrada y = %.1f", (sqrt(y)));
	}
	return 0;
} 




