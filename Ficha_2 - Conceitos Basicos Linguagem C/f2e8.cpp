#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float x, y, soma;
	
	printf("Por favor, digite dois numeros reais\n");
	scanf("%f %f", &x, &y);
	
	
	soma = x+y;
	
	
	printf ("A soma desses numeros e de: %.1f \n\n", soma);



system ("pause");	
return 0;
}
