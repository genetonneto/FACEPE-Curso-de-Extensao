/* 1.Implemente um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200.    
Entrada: 500     Saída: Fora do Intervalo 
Entrada: 123           Saída: No Intervalo
*/

#include <stdio.h>
 int main (){
 int numero = 99;

   if (numero < 100 || numero > 200){  
     printf("O numero esta fora do intervalo");
   } else {
     printf("O numero esta no intervalo");
   }
   
   return 0;
}


