// Q14) Implemente um programa que solicite do usuário números inteiros e verifique quantos números são pares e quantos são ímpares. 
//Além disto, deve ser exibido a média aritmética de números pares e impares. Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
	
	int num,quantpares=0,quantimpares=0;
	int somapar=0,somaimpar=0; 
	float media,mediaimpar;
	
	setlocale(LC_ALL, "portuguese");
	
	while(1) {
	
	printf ("Digite um numero : (Para Sair digite um numero negativo ! ) \n");
	scanf ("%d",&num);
	
	if (num <0) {
		break;
	}
	
	if(num % 2 ==0) {
		quantpares++;
		somapar +=num;
		
	} else {
		quantimpares++;
		somaimpar+=num;
		
	}
}
		media = somapar/quantpares;
		printf("Quantidade de números pares : %d \n",quantpares);
		printf("Media dos números pares : %f \n",media);
		mediaimpar = somaimpar/quantimpares;
		printf("Quantidade de números impares : %d \n",quantimpares);
		printf("Media dos números impares : %f \n",mediaimpar);	
	system ("pause");	
	
	return 0;
}

