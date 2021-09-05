#include <stdio.h>
#include <stdlib.h>

int main(){

float cf, pd, pi, custo;
	
	printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\nDigite o custo do fabrico do seu carro\n\t\t\t\t\t\t\t\t\t\t\t");
	scanf ("%f", &cf);
	
	pd = (cf*0.12);
	pi = (cf*0.45);
	
	custo=cf+pd+pi;
	
	printf("\t\t\t\t\tO custo total do seu carro e %f\n\n\n\n\n\n\n",custo);
	
system ("pause");	
return 0;
}
