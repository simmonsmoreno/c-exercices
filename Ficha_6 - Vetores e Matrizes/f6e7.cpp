#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM_MAX 10 

float Vet1[TAM_MAX]; 
float Maior; 



for (i=0; i<TAM_MAX; i++){
	scanf("%f",&Vet1[i]);
	Maior = Vet1[0];  	
}

for(i=0; i<TAM_MAX; i++){
	
	if (Vet1[i] > Maior){
	
		Maior = Vet1[i]; 
		printf("O maior elemento é %f\n",Maior);
	}

} 

