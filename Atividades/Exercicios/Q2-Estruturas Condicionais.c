/* 2.Implemente um algoritmo que receba o ano de nascimento de uma pessoa e
informe se ela é: Jovem (0 a 18 anos); Adulta (19 a 59 anos) ou Idosa (acima
de 60 anos).

Exemplo de Execução

Entrada: 1983 Saída: Adulta
*/

#include <stdio.h>

int main(){

  int anoinicial = 1983;
  int anoatual = 2022; 
  int idade = anoatual - anoinicial;

  if((idade >= 0) && (idade < 18)){
    printf("Uma pessoa jovem");  
  } else if ((idade > 19) && (idade <= 59)){
    printf("Uma pessoa adulta");
  } else {
    printf("Uma pessoa idosa");
  }

 return 0; 
}