#include <stdio.h>

main(){
	
	int matriz1[3][3] = {{1,2,3},{7,8,9},{7,8,9}};
	int matriz2[3][3] = {{1,2,3},{6,5,4},{7,8,9}};
	int a, b, contar=0;
	
	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			if(matriz1[a][b]=matriz2[a][b]){
				printf("Posicao [%d][%d] iguais\n", a, b);
			}
		}
	}
}
