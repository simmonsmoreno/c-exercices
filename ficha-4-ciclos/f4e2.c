#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int x, y, z;
	
	printf("Digite um numero\n");
	scanf("%d", &y);
	
	
			for (x=0;x<=y;x++){
				
				z=pow(2,x);
				printf ("2 ^ %d = %d\n", x, z);
			}
			
	
system ("pause");
return 0;

}
