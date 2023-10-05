#include<stdio.h>

main(){

    int num = 0;
    int contador = 10;
    int res;

    while(contador >= 0){
        res = num * contador;
        printf(" \n%d x %d = %d",num , contador, res);
        contador--;
    }

     int num1, num2, soma, opcao = 1;

      printf("Digite 1 para comecar");
      scanf("%d", &opcao);

     while(opcao != 0){
        printf("Digite os numeros");
        scanf("%d %d", &num1, &num2);
        soma = num1 + num2;
        printf("Soma: %d", soma);

        printf("Deseja repetir a operacao? 0-Nao outroNumero-Sim");
        scanf("%d", &opcao);
     }





}