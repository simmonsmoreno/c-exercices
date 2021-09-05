#include <stdio.h>
#include <stdlib.h>

int main()
{
int x, y;
float media;

	printf("Digite dois numero inteiros\n");
	scanf("%d %d",&x, &y);
	
	media = (x+y)/2;
	
	printf ("A media entre esses numeros e de %2.f\n", media);

system ("pause");
return 0;
}
