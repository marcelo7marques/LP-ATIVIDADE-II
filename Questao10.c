/******************************************************************************

Q10) Crie um programa que solicite ao usu�rio dois n�meros e uma opera��o matem�tica (+, -). Utilize o switch case para realizar a opera��o desejada e exibir o resultado.

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
	
	printf("Escolha a opera��o matematica : \n");
	printf("+ SOMA \n");
	printf("- SUBTRA��O \n");
	printf("* MULTIPLICA��O \n");
	printf("/ DIVIS�O \n");
	scanf("%c",&tipo);


    switch(tipo) {
	
	case '+' :
		calculo = num1 + num2;
		printf ("O Resultado da opera��o � : %d \n",calculo);
		break;
			
	case '-' :
		calculo = num1 - num2;
		printf("Resultado da opera��o : %d \n",calculo);
		break;
		
	case '*' :
		calculo = num1 * num2;
		printf("Resultado da opera��o � : %d \n",calculo);
		break;
		
	case '/' :
		if (num2== 0) {
		printf ("N�o � possivel dividir por zero ! \n");
		printf ("Digite o Segundo Numero Novamente : \n");
		scanf("%d",&num2);
		calculo = num1 / num2;
		printf("Resultado da opera��o � : %d \n",calculo); 
		} else {
		calculo = num1 / num2;
		printf("Resultado da opera��o � : %d \n",calculo);
	}
		break;		
	default:
		printf("Op��o Invalida ! \n");
		
	}
	getch();
	return 0;
}
