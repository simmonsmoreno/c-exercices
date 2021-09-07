#include <stdio.h>

main(){
	
	double vetor1[5], vetor2[5], vetor3[5];
	int i, k;
	
	puts("Vetor 1: ");
	for(i=0; i<5; i++){
		scanf("%f", &vetor1[i]);
	}
	
	puts("Vetor 2: ");
	for(i=0; i<5; i++){
		scanf("%f", &vetor2[i]);
	}
	
	for(i=0; i<5; i++){
		vetor3[i] = vetor1[i];
	}
	
	for(i=0, k=4; i<5; i++, k--){
		vetor1[i] = vetor2[k];
	}
	
	for(i=0, k=4; i<5; i++, k--){
		vetor2[i] = vetor3[k];
	}
	
	for(i=0; i<5; i++){
		printf("vetor1[%d] = %f ==============> vetor2[%d] = %f\n", i, vetor1[i], i, vetor2[i]);
	}
}
