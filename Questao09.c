#include <stdio.h>
#include <locale.h>

int main() {
	
setlocale(LC_ALL,"portuguese");

int num;

printf("DIGITE UM NUMERO : \n");
scanf("%d",&num);

switch (num) {

case 1:
printf("Número não primo ! \n");
break;

case 2:
printf("Número Primo ! \n");
break;

case 3:
printf("Número Primo ! \n");
break;

case 4:
printf("Número não Primo ! \n");
break;

case 5:
printf("Número Primo ! \n");
break;

case 6:
printf("Número não Primo ! \n");
break;

case 7:
printf("Número Primo ! \n");
break;

case 8:
printf("Número não Primo ! \n");
break;

case 9:
printf("Número não Primo ! \n");
break;

default: 
  if (num <=1 || num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
    printf("Número não Primo ! \n");
  } else {
    printf ("Número Primo ! \n");
  }
}
return 0;
}
