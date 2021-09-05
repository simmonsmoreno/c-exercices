#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int ano, divisao1, divisao2;
	
	printf("Escreva o ano\t\t\t\t\t\Atencao!!!Ano maior que 1900\n\n");
	scanf("%d",&ano);
	
	
	divisao1=ano%4;
	divisao2=ano%100;
	
	if(divisao1 == 0 && divisao2 !=0 && ano> 1990){
		
			printf("==>Inseriste um ano bissexto");
		}else{
			
			if(ano>1990){
				
				printf("==>Ano nao qualificado\n\n");
			}else{
				
				if(ano<1990){
					
					printf("==>Digite um ano valido\n\n");
				}
			}
			
		
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t==>powered by Saiman 1ano EIC<==\n\n\n\n\n\n\n\n\n\n\n");

system ("pause");	
return 0;
}

