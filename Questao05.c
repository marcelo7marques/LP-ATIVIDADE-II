/******************************************************************************

Q5)Enquanto você faz parte de uma equipe de desenvolvimento de software, desenvolva um programa que solicite ao usuário que escolha um idioma de preferência 
(1 - Inglês, 2 - Espanhol, 3 - Francês). Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    int idioma;
    
	printf("--------------GO BY BUS------------------------\n");
    printf("Digite a opção de acordo com o idioma de preferência : \n");
    printf("1 - Inglês  || 2 - Espanhol  || 3 - Francês \n");
	scanf("%d",&idioma);
    
    if(idioma == 1) 
        printf("Welcome to the GO BY BUS mobility program! \n");
    else 
	if (idioma == 2) 
    	printf("¡Bienvenidos al programa de movilidad GO BY BUS! \n");
	else
	if 
	(idioma == 3) 
        printf("Bienvenue dans le programme de mobilité GO BY BUS ! \n");
    
	return 0;
}
