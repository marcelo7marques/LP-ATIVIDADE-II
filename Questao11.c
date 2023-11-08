#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int main() {
    setlocale(LC_ALL,"");

    char codigoacesso[200] = "senaiden15";
    char usuario[200];
    char codigo[200];
    bool codigocorreto = false;

	printf("Digite o Nome do Usuario : \n");
	gets(usuario);

    do {  
        printf("Digite o codigo de acesso: ");
        gets(codigo);

        codigocorreto = strcmp(codigo, codigoacesso) == 0 ? true : false;

        codigocorreto == true && codigocorreto ? printf(" Seja Bem-vindo! \n") : printf("Codigo inserido incorretamente , tente de novo! \n\n");

    } while (!codigocorreto);
       
    return 0;
}
