/******************************************************************************

Q6) Considerando um projeto de e-commerce, implemente um programa que solicite ao usu�rio o c�digo do produto (1 - Camiseta, 2 - Cal�a, 3 - Sapato). 
Com base na escolha do usu�rio, exiba a mensagem informando o produto selecionado e seu pre�o.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    int tipo;
    
	printf("           E-COMMERCE M7 MODAS     \n");
    printf("Digite o codigo de acordo com a roupa escolhida : \n");
    printf("1 - Camiseta  || 2 - Cal�a  || 3 - Sapato \n");
	scanf("%d",&tipo);
    
    if(tipo == 1) 
        printf("Camiseta = R$ 29,90 \n");
    else 
	if (tipo == 2) 
    	printf("Cal�a = R$ 39,90 \n");
	else
	if (tipo == 3) 
        printf("Sapato = R$ 49,90 \n");
    
    printf("Obrigado pela preferencia ! ");
	return 0;
}
