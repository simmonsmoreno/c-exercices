#include <stdio.h>
#include <stdlib.h>

int main()
{
	int seg;
	int minuto, horas, segundo;
	
	printf("Digite um determinado numero de segundos\n");
	scanf("%d", &seg);
	
	horas = seg/3600;
	minuto = seg%3600;
	segundo = seg - (horas*3600) - (minuto*60);
	
	printf ("O numero de segundos introduzidos e: %d <==>  %d:%d:%d", segundo, horas, minuto, segundo);


system ("pause");	
return 0;
}
