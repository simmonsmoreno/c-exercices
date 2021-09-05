#include<stdio.h>


int main(){
	
	int numero, i, soma;
	
	printf("Introduza um numero inteiro positivo >> "); scanf("%d", &numero);
		
	for(i = 1; i<numero; i++){
		printf("%d + ", i);
		soma += i; //soma = soma+1;	
	}
	
	soma-=1;
	printf(" = %d\n", soma);	//1+2+3=6
	
	printf("Numeros pares entre 0 e %d:\n", numero);
	for(i=1; i<numero;i++){
		if(i%2==0){
			printf("%d - ", i);
		}
	}
	 
	return 0;
}
