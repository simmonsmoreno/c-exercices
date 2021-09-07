#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int x, b=0, s, c;
	float med;
	
	do{
		
		printf ("entre com um numero inteiro\n");
		scanf("%d", &x);
		
		s+=x;
		c++;
		
		
	}while(x!=0);
	
	med=s/c;
	
	printf("media = %f\n", med);


system ("pause");
return 0;
}
