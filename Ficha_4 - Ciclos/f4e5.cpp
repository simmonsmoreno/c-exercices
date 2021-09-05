#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int y, x;
			
			do{
				
				printf("Introduza os km percorridos pela viatura \n");
				scanf("%d", &y);
				
				if(y!=-1){
					
					x+=y;
				}	
				
			}while (y!=-1);
			
			printf("O total de kilometros eh %d\n", x);
	
	
system ("pause");
return 0;

}
