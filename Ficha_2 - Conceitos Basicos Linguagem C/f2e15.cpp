#include <stdio.h>
#include <stdlib.h>

int main(){
	
int opcoes;

	printf("Benvindo ao menu meu grilo da cvmovel\nPara assuntos ligados ao cliente prima 1\nPara assuntos ligados aos fornecedores prima 2\nPara assuntos ligados as faturas prima 3\nPrima 4 para sair\n");
	scanf("%d", &opcoes);
	
	
	switch (opcoes){
		
		case 1: 
		
				printf ("Estas na area dos clientes\n");
				break;
				
				
				
		case 2: 
		
				printf ("Estas na area dos fornecedores\n");
				break;
				
				
		
		case 3: 
		
				printf ("Estas na area das faturas\n");
				break;
				
				
				
		case 4: 
		
				printf ("Aguardando saida\n");
				break;
				
				
				
		default: 
			
			printf("Opcao invalida\n");
			
		
		
	
	}
	
	
system ("pause");	
return 0;
}
