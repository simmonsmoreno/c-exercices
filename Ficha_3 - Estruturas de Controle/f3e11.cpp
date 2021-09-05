#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, y, z;
	
	printf("Digite um numero inteiro\n");
	scanf("%d", &x);
	
	z=x%3;
	y=x%2;
	
	
	if(y==0 && z==0){
		
		printf("O numero e par\n\n");
		printf("O numero e multiplo de tres\n\n");
		
	}else{
		
		if(y!=0 && z!=0 ){
			
			printf("O numero e impar\n\n");
			printf("O numero nao e multiplo de tres\n\n");
			
		}else{
			
			if(y==0 && z!=0 ){
			
			printf("O numero e par\n\n");
			printf("O numero nao e multiplo de tres\n\n");
			
		}else{
			
			if(y!=0 && z==0 ){
			
			printf("O numero e impar\n\n");
			printf("O numero e multiplo de tres\n\n");
			
		}
		
		
	}
}
system ("pause");
return 0;
}	
}
