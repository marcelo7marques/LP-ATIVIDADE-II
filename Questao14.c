// Q14) Implemente um programa que solicite do usu�rio n�meros inteiros e verifique quantos n�meros s�o pares e quantos s�o �mpares. 
//Al�m disto, deve ser exibido a m�dia aritm�tica de n�meros pares e impares. Deve-se interromper a leitura dos dados quando for digitado um valor negativo.

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
		printf("Quantidade de n�meros pares : %d \n",quantpares);
		printf("Media dos n�meros pares : %f \n",media);
		mediaimpar = somaimpar/quantimpares;
		printf("Quantidade de n�meros impares : %d \n",quantimpares);
		printf("Media dos n�meros impares : %f \n",mediaimpar);	
	system ("pause");	
	
	return 0;
}

