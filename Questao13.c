/******************************************************************************

Q13) Crie um programa que solicite do usu�rio dois n�meros inteiros e informe qual destes n�meros � o maior e qual � o menor.

. 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
 
	int num1,num2; 
 
 	printf("Digite o primeiro numero : \n");
 	scanf("%d",&num1);
 	
 	printf("Digite o segundo numero : \n");
 	scanf("%d",&num2);
 	
 	if (num1 > num2) {
 		printf("O Maior Numero � : %d \n",num1);
 		printf("O Menor Numero � : %d \n",num2);
	 } if (num1 < num2) {	 
	 	printf("O Maior Numero � : %d \n",num2);
	 	printf("O Menor Numero � : %d \n",num1);
}
    return 0; 
}
