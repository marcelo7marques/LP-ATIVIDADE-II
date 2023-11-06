/******************************************************************************

Q01) Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura. O jogo tem um sistema de clima que 
depende da temperatura externa. Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado. Se a temperatura for 
inferior a 15 graus Celsius, o clima será chuvoso. Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL,"portuguese");
    
    float temperatura;

    printf("Bem-vindo ao Game Aventure \n");
    printf("Configuração do Clima ! \n");
    printf("Informe a temperatura atual : \n");
    scanf("%f",&temperatura);
    
    if(temperatura >25) {
    printf ("Clima Ensolarado \n");
} else {
    printf("Clima Chuvoso \n");
}
    return 0;

}
