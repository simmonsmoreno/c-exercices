#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main (){
	int nUm, nDois;
	
	printf("digite um numero inteiro\n");
	scanf("%d", &nUm);
	
	nDois = nUm;
	
	for (;nDois >0; nDois-- ){
	
		if(nUm % nDois==0 && nUm != nDois || nUm ==1){
		
		printf("numero n\306o \202 primo\n\n");
		break;
		
	}
	
	else if (nDois ==2 ){	 
		
		printf("numero \202 primo \n\n");
		break;
	}
	}
	
getch ();
	system ("pause");
	return 0;
}
