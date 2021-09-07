#include <stdio.h>
#include <stdlib.h>

int main(){


int salario, desc;
	
	printf("Digite o seu salario:\n");
	scanf ("%d", &salario);
	
	if(salario>=100000){
		
		desc=salario*0.1;
		printf("Seras descontado uma quantia de %d escudos relativo aos impostos\n\n", desc);
		
	}else{
		
		if(salario<100000){
		
		desc=salario*0.05;
		printf("Seras descontado uma quantia de %d escudos relativo aos impostos\n\n", desc);
			
			
		}else{
			
			if(salario<1000){
				
				printf("Erro na leitura\nSalario muito baixo\n\n");
			}
		}
	}
system ("pause");	
return 0;
}
