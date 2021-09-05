#include <stdio.h>

int main(){
	
	int x, y, i, somaDivisorX=0, somaDivisorY=0;
	
	printf("Digite dois numeros >> "); scanf("%d %d", &x, &y);
	
	printf("Divisores de %d:\n", x);
	for(i=1; i<x; i++){
		if(x%i==0){
			printf("%d\n", i);
			somaDivisorX += i;
		}
	}
	
	printf("Divisores de %d:\n", y);
	for(i=1; i<y; i++){
		if(y%i==0){
			printf("%d\n", i);
			somaDivisorY += i;
		}
	}
	
	if(x==somaDivisorY && y==somaDivisorX){
		printf("Os numeros sao amigos!");
	}else{
		printf("Os numeros nao sao amigos!");
	}
	return 0;
}
