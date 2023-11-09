//Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. O sistema oferece um desconto de 10% para compras acima de R$ 100,00 
//se a compra for feita em um dia de semana. Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
	
	float descontosemana;
	float descontofs;
	float compra;
	float valorfinal;
	int dia; 
	
	setlocale(LC_ALL, "portuguese");
	
	
	printf ("Informe o valor da compra : \n");
	scanf ("%f",&compra);
	
	printf ("Informe o dia da semana | 0 - Fim de Semana e 1-Dia de Semana : \n");
	scanf("%d",&dia);
	
	
	if (compra > 100 && dia == 0)  {
			descontofs = compra * 0.15;
			valorfinal = compra - descontofs;
			printf ("O Valor Final é : R$ %.2f \n",valorfinal);
		} else {
			if (compra > 100 && dia == 1) {
			descontosemana = compra * 0.10;
			valorfinal = compra - descontosemana;
			printf ("O Valor Final é : R$ %.2f \n",valorfinal);
			} else 
			if (compra < 100) {
			printf ("O Valor Final é : R$ %.2f \n",compra);
			
		}			
	
	system ("pause");	
	
	return 0;
}
}
