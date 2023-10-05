#include<stdio.h>

main(){
    /*
    Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
    */
   int contador = 0, numero = 3, c = 1 , multiplo;

   while(contador < 5){
        if(numero % 3 == 0){
            printf("\n%d", numero);
            contador++;
        }
        numero++;
   }
   while(c <= 15){
        multiplo = c * 3;
        printf("%d", multiplo);
        c++;
   }

}