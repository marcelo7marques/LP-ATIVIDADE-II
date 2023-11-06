/******************************************************************************

Q3 )Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e determine 
sua classificação com base na seguinte tabela:
 - Nota maior ou igual a 9: "Excelente"
 - Nota entre 7 e 8.9: "Bom"
 - Nota entre 5 e 6.9: "Razoavel"
 - Nota menor que 5: "Insuficiente"
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    
    float nota;
    

    printf("Digite a nota do aluno : \n");
    scanf("%f",&nota);
    
    if(nota >= 9) 
        printf("Excelente \n");
    else 
	if (nota >= 7) 
    	printf("Bom \n");
	else
	if (nota >= 5) 
        printf("Razoavel \n");
	else 
        printf("Insuficiente \n");
    

    return 0;
}
