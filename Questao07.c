/******************************************************************************

Q7) Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações).
 Solicite ao usuário que escolha uma opção e, utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    int menu;
    int onibus;
    int mapa;
    int slot;
    
	printf("BEM-VINDO AO BUS DRIVER - SIMULADOR DE DIREÇÃO \n");
    printf("                MENU  \n");
    printf("1-NOVO JOGO \n");  
	printf("2-CARREGAR JOGO \n");
	printf("3-CONFIGURAÇÕES \n");
	scanf("%d",&menu);
    
    switch(menu) {
	case 1:
		printf("ESCOLHA O ONIBUS : \n");
		scanf("%d",&onibus);
		printf("ESCOLHA O MAPA : \n");
		scanf("%d",&mapa);
		printf ("BOM JOGO ! \n");
		break;
	case 2:
		printf("ESCOLHA O SLOT SALVO : \n");
		scanf("%d",&slot);
		printf("BOM JOGO ! \n");
		break;
	case 3:
		printf("1-AUDIO \n");
		printf("2-TAMANHO DA TELA \n");
		printf("3-LOCAL DE ARMAZENAMENTO \n");
		printf("4-OUTROS");
		break;		
	}
	return 0;
}
