#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    

    printf("========== powered by saiman ==========\n\n");

        printf("Digite um mes:\n");
        scanf("%d", &mes);
        
        	switch (mes){
        		case 1:
        			printf ("===============================================>O mes introduzido eh janeiro\n");
        			break;
        			
    			case 2:
    				printf ("===============================================>O mes introduzido eh fevereiro\n");
    				break;
        				
				case 3:
					printf ("===============================================>O mes introduzido eh marco\n");
					break;
        					
				case 4:
					printf ("===============================================>O mes introduzido eh abril\n");
					break;
				
				case 5:
        			printf ("===============================================>O mes introduzido eh maio\n");
        			break;
        			
    			case 6:
    				printf ("===============================================>O mes introduzido eh junho\n");
    				break;
        				
				case 7:
					printf ("===============================================>O mes introduzido eh julho\n");
					break;
        					
				case 8:
					printf ("===============================================>O mes introduzido eh agosto\n");
					break;
				
				case 9:
        			printf ("===============================================>O mes introduzido eh setembro\n");
        			break;
        			
    			case 10:
    				printf ("===============================================>O mes introduzido eh outubro\n");
    				break;
        				
				case 11:
					printf ("===============================================>O mes introduzido eh novembro\n");
					break;
        					
				case 12:
					printf ("===============================================>O mes introduzido eh dezembro\n");
					break;
        						
				default:
					printf ("===============================================>Numero desqualificado");
        	}
    

    
return 0;
}





