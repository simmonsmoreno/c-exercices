/* Os funcionários de uma empresa receberam um aumento de salário: 
 
1= Técnicos: 100% 
2= Gestores: 50%  
3= Demais: 25% 

Escrever um programa que receba como entrada o salário actual 
e o cargo do funcionário, e apresente o novo salário após o aumento*/

#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int salario, profissao, tecla;
	
	do{
	
	printf("Digite o seu salario >> ");
	scanf("%d", &salario);
	
	printf("\n\nEscolha a sua profissao:\n\n");
	printf("1 >> Tecnicos\n2 >> Gestores\n3 >> Demais\n\n");
	scanf("%d", &profissao);
	
	switch (profissao){
	
	
		case 1:
			
		salario = salario + (salario/1);
		printf("\n\nRecebes um aumento de 100%%\n\n");
		printf("o seu novo salario eh de %d ecv\n\n", salario );
		
		break;
		
		case 2:
		
		salario = salario + (salario/0.5);
		printf("\n\nRecebes um aumento de 50%%\n\n");
		printf("o seu novo salario eh de %d ecv\n\n", salario );
			
		break;
		
		case 3:
		
		salario = salario + (salario/0.25);
		printf("\n\nRecebes um aumento de 25%%\n\n");
		printf("o seu novo salario eh de %d ecv\n\n", salario );
		
		break;
		
		default:
			
		printf("Profissao invalida\n\n");
		
		
		
		}
		
		
		printf("Pressione '1'' para continuar ou '0'' para sair >> ");
		scanf("%d", &tecla);
		system ("cls");
		
		}while(tecla !=0);
		
return 0;	
}
