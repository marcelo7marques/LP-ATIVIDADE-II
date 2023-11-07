/******************************************************************************

Q13) Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor.

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
 		printf("O Maior Numero é : %d \n",num1);
 		printf("O Menor Numero é : %d \n",num2);
	 } if (num1 < num2) {	 
	 	printf("O Maior Numero é : %d \n",num2);
	 	printf("O Menor Numero é : %d \n",num1);
}
    return 0; 
}
