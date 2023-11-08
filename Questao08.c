/******************************************************************************

Q8) Desenvolva um programa que solicite ao usuário um número inteiro positivo e faça uma contagem regressiva a partir desse número até zero. 
Utilize o switch case para exibir mensagens personalizadas para cada número da contagem regressiva. 


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL,"portuguese");
    
    int num;

    printf("Informe um número : \n");
    scanf("%d",&num);
    
    while (num >=0) {
    	switch (num) {
    		case 0:
    			printf("0 - Fim da contagem regressiva ! \n");
    			break;
    		
    		case 1:
			case 2:
			case 3:
    		case 4:
    			printf("%d - Estamos quase finalizando ! \n",num);
    			break;
			case 5:
				printf("5 - Falta apenas 5 numeros para encerrar ! \n");
				break;
			case 6:
			case 7:
			case 8:
				printf("%d - Estamos perto de finalizar ! \n",num);
				break;
			case 9:
			case 10:
			case 15:
			case 20:
			case 25:
			case 30:
			case 35:
			case 40:
			case 45:
			case 50:
				printf("%d - Falta %d numeros para finalizar ! \n",num,num);
				break;
				
			default:
			printf("%d \n",num);	
    		
		}
		num--;
	}
    return 0;

}
