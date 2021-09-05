#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int data, ano, idade ;
	
	printf ("Em que ano nasceste?\n");
	scanf("%d", &data);
	
	printf ("Em que ano estamos?\n");
	scanf("%d", &ano);
	
	idade = ano - data;
	
	printf("\n\n\n====>No final deste an teras: %d anos\n\n\n\n\n\n\n\n\n\n\n", idade);
	
	

system ("pause");	
return 0;
}

