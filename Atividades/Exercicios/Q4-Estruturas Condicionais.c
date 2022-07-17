4. Escreva um programa que leia um inteiro entre 1 e 12, e imprima o mês
correspondente a esse número. Isto é, Janeiro, se for digitado 1, Fevereiro se
for digitado 2, e assim por diante.


#include <stdio.h>

int main (){
 int num = 11;

  if(num == 1){
    printf("Janeiro");
  } else if (num == 2){
    printf("Fevereiro");
  } else if (num == 3){
    printf("Março");
  } else if (num == 4){
    printf("Abril");
  } else if (num == 5){
    printf("Maio");
  } else if(num == 6){
    printf("Junho");
  } else if (num == 7){
    printf("Julho");
  } else if (num == 8){
    printf("Agosto");
  } else if (num == 9){
    printf("Setembro");
  } else if (num == 10){
    printf("Outubro");
  } else if (num == 11){
    printf("Novembro");
  } else if (num == 12){
    printf("Dezembro");
  } else {
    printf("O numero da data nao eh correspondente");
  }

  return 0;
  
}