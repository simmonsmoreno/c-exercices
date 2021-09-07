/* programa que le uma sequencia de caracteres ate entar com o caracter ".". 
para cada caracter lido devera escever o seu codigo ascii*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char x;
	
	do{
		
		ffinsh (stdin);
		printf("entre com um caracter\n");
		scanf("%c", &x);
		printf("O codigo ASCII do caracter e %d\n", x);
		
		
	}while(x!=0);
	
	system ("pause");
	return 0;
}
