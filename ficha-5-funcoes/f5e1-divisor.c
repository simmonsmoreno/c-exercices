#include <stdio.h>


main(){
	
	int x; 
	
	printf("Digite um numero positivo >> "); scanf("%d", &x);
	
	ehDivisor(x);
	
	
	
}

ehDivisor(int n){
	
	int i, soma=0;

	for(i=2; i<n; i++){
		if(n%i==0){
			soma += i;
		}
	}
	
	printf("A soma dos divisores proprios de %d eh %d", n, soma);
}


