#include<stdio.h>

main(){

    int num1, num2, soma, opcao;

    do{
        printf("Digite os numeros");
        scanf("%d %d", &num1, &num2);
        soma = num1 + num2;
        printf("Soma: %d", soma);

        printf("Deseja repetir a operacao? 0-Nao outroNumero-Sim");
        scanf("%d", &opcao);

    }while(opcao != 0);

    printf("Saiu do loop");

}