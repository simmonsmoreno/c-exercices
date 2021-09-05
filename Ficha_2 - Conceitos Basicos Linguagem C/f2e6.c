//Programa que solicite um certo quantidade de segundos e de seguida
//indique quantas horas, minutos e segundos esse valor representa

#include <stdio.h>

int main(){
	
	int long segundos, minutos, horas, dias, meses, anos;
		
	printf("Digite a quantidade de segundos >> "); 
	scanf("%d", &segundos);
	
	minutos = segundos/60; 
	segundos = segundos%60; 
	horas = minutos/60; 
	minutos = minutos%60; 
	dias = horas/24;
	horas = horas%24;
	meses = dias/31;
	dias = dias%31;
	anos = meses/12;
	meses = meses%12;
	
	printf("%d anos / %d meses / %d dias - %d horas : %d minutos : %d segundos\n", anos, meses, dias, horas, minutos, segundos);
	
	return 0;
}


//a logica mais linda da minha vida


