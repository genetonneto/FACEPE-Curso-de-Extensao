// 3. IMC

#include <stdio.h>

int main (){
  int peso = 50;
  float altura = 1.60;
  float imc = peso / (altura * altura);
  printf("%f\n",imc);


  if (imc < 18.5){
    printf("Abaixo do peso");
  } else if ((imc > 18.5) && (imc <= 25)){
    printf("Peso Normal");
  } else if ((imc > 25) && (imc < 30)){
    printf("Acima do peso");
  } else {
    printf("Obeso");
  }

  return 0;
}