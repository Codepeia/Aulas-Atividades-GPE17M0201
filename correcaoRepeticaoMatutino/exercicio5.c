#include<stdio.h>

main(){
    /*
    Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 
    */
   int contador = 0, soma = 0, numero = 1;
   /*while(contador < 50){
        numero = numero + 2;
        soma += numero;
        contador++;
        printf("\n%d %d %d", contador, numero, soma);
   }*/
    while(contador < 50){
        if(numero % 2 == 0){
            soma += numero;
            contador++;
        }
        numero++;
    }
     printf("Soma total: %d", soma);

}

