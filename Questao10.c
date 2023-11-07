/******************************************************************************

Q10) Crie um programa que solicite ao usuário dois números e uma operação matemática (+, -). Utilize o switch case para realizar a operação desejada e exibir o resultado.

. 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    int num1,num2,calculo;
	char tipo;
    
	printf("Digite o Primeiro Numero : \n");
	scanf("%d",&num1);
	
	printf("Digite o Segundo Numero : \n");
	scanf("%d",&num2);
	
	fflush(stdin);
	
	printf("Escolha a operação matematica : \n");
	printf("+ SOMA \n");
	printf("- SUBTRAÇÃO \n");
	printf("* MULTIPLICAÇÃO \n");
	printf("/ DIVISÃO \n");
	scanf("%c",&tipo);


    switch(tipo) {
	
	case '+' :
		calculo = num1 + num2;
		printf ("O Resultado da operação é : %d \n",calculo);
		break;
			
	case '-' :
		calculo = num1 - num2;
		printf("Resultado da operação : %d \n",calculo);
		break;
		
	case '*' :
		calculo = num1 * num2;
		printf("Resultado da operação é : %d \n",calculo);
		break;
		
	case '/' :
		if (num2== 0) {
		printf ("Não é possivel dividir por zero ! \n");
		printf ("Digite o Segundo Numero Novamente : \n");
		scanf("%d",&num2);
		calculo = num1 / num2;
		printf("Resultado da operação é : %d \n",calculo); 
		} else {
		calculo = num1 / num2;
		printf("Resultado da operação é : %d \n",calculo);
	}
		break;		
	default:
		printf("Opção Invalida ! \n");
		
	}
	getch();
	return 0;
}
