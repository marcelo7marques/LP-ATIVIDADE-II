/******************************************************************************

Q5)Enquanto voc� faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usu�rio que escolha um idioma de prefer�ncia 
(1 - Ingl�s, 2 - Espanhol, 3 - Franc�s). Com base na escolha do usu�rio, exiba a mensagem de boas-vindas no idioma selecionado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    int idioma;
    
	printf("--------------GO BY BUS------------------------\n");
    printf("Digite a op��o de acordo com o idioma de prefer�ncia : \n");
    printf("1 - Ingl�s  || 2 - Espanhol  || 3 - Franc�s \n");
	scanf("%d",&idioma);
    
    if(idioma == 1) 
        printf("Welcome to the GO BY BUS mobility program! \n");
    else 
	if (idioma == 2) 
    	printf("�Bienvenidos al programa de movilidad GO BY BUS! \n");
	else
	if 
	(idioma == 3) 
        printf("Bienvenue dans le programme de mobilit� GO BY BUS ! \n");
    
	return 0;
}
