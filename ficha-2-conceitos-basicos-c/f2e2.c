#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, dup;

	printf("Digite um numero inteiro menor que 100 >> ");
	scanf("d",&x);
	
	dup = x*2;
	
	if (x<=100)
	{
		printf ("%dup", &dup);
	
	}else{
		
		printf ("Numero invalido");
	}

	return 0;
}
