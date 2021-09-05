#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, x, y, resultado;
    char sinal;
    
    printf("============================================================\n");
	printf("\t\t\tSUPER CALCULADORA\n");
    printf("============================================================\n");
    printf("Para somar prima (1)\n");
    printf("Para subtrair prima (2)\n");
    printf("Para multiplicar prima (3)\n");
    printf("Para dividir prima (4)\n\n");
    printf("Para sair do programa prima (0)\n");
    printf("==================== powered by saiman ====================\n\n>>");
    scanf("%d", &op );
        	
    if(op<=4 && op>=1){
    	printf("Digite dois numeros a operar >> "); scanf("%d %d", &x, &y);
	}
    
   	switch (op){
		case 1:
			resultado = x+y; sinal = '+';
			break;
        			
		case 2:
			resultado = x-y; sinal = '-';
			break;
				
		case 3:
			resultado = x*y; sinal = 'x';
			break;
				
		case 4: 
			resultado = x/y; sinal = '/';
			break;
			
		default: 
			printf (">>>Operacao invalida\n\n");
			exit(1);
				
	}
	
	printf ("%d %c %d = %d\n", x, sinal, y, resultado);
	
	return 0;

}





