/******************************************************************************

Q12) Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. O programa deve calcular e exibir a média das notas digitadas. 
Utilize o for para repetir o processo de solicitação das notas.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
 
	float nota,soma=0,media;
	int cont = 0 , qtd;

 
 	printf("Digite a quantidade de notas : \n");
 	scanf("%d",&qtd);
 	
 	for(cont = 0; cont<qtd; cont++){
 		
 		printf("Digite a %d°Nota : \n",cont+1);
 		scanf("%d",&nota);
 		
 		soma += nota;
	 }
	 media = soma/nota;
	 
	 printf ("A Media das Notas Informadas é : %f \n",media);
 
    return 0; 
}
