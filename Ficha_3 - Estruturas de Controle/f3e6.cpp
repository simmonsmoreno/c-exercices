#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, y;
	
	printf("Digite dois numeros inteiros\n");
	scanf("%d %d", &x, &y);
	
	
	
	if(x>y){
		
		printf("%d ==> %d\n", x, y);
		
	}else{
		
		if(x<y){
			
			printf("%d ==> %d\n", y, x);
		
		}else{
			
			if(x=y){
				
				printf("os numeros sao iguais\n");
			}
		}
		
		
	}

system ("pause");
return 0;
	
}
