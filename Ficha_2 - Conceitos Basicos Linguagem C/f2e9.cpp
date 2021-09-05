#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float a, b, c, x;
		
	printf ("\t\tHello estudantes de matematica\n \tHoje vamos resolver as equacoes do primeiro grau!!\n");
	
	
	printf ("\n\nIntroduza o valor de a\n\n");
	scanf ("%f", &a);
	
	printf ("\n\nAgora introduza o valor de b\n\n");
	scanf ("%f", &b);
	
	printf ("\n\nPor fim introduza o valor de c\n\n");
	scanf ("%f", &c);
	
	x=(c-b)/a;
	
	printf ("\n\nCalculamos o valor de x e podemos definir que x toma o valor de %.2f\n\n",x);

system ("pause");	
return 0;
}

