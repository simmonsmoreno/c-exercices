#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    

    printf("========== powered by saiman ==========\n\n");

        printf("Digite um numero entre 0 e 4: ");
        scanf("%d", &num);
        
        	switch (num){
        		case 1:
        			printf ("===============================================>Numero introduzido eh um");
        			break;
        			
        			case 2:
        				printf ("===============================================>Numero introduzido eh dois");
        				break;
        				
        				case 3:
        					printf ("===============================================>Numero introduzido eh tres");
        					break;
        					
        					case 4:
        						printf ("===============================================>Numero introduzido eh quatro");
        						break;
        						
        						default:
        							printf ("===============================================>Numero desqualificado");
        	}
    

    
return 0;
}





