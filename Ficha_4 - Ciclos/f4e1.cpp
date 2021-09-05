#include <stdio.h>
#include <stdlib.h>

int main(){

	int x, y, z;
	
	printf("Digite um numero menor que 10\n");
	scanf("%d", &y);
	
	
			for (x=0;x<=10;x++){
				
				z=x*y;
				printf ("%d x %d = %d\n", y, x, z);
			}
			
	
system ("pause");
return 0;

}
