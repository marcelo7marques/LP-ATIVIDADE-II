/******************************************************************************

Q7) Em um projeto para um jogo, � necess�rio cria um menu, crie um programa que exiba um menu com op��es (1 - Novo jogo, 2 - Carregar jogo, 3 - Configura��es).
 Solicite ao usu�rio que escolha uma op��o e, utilizando o switch case, execute a funcionalidade correspondente � op��o escolhida.

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
