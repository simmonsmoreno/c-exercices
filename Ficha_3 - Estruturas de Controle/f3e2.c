#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, y;
	
	printf("Digite um numero inteiro\n");
	scanf("%d", &x);
	

	y=x%2;
	
	
	if(y==0 ){
		
		printf("O numero e par\n\n");

		
	}else{
		
		if(y!=0 ){
			
			printf("O numero e impar\n\n");
			
		
		}
		
		
	}

system ("pause");
return 0;
}
