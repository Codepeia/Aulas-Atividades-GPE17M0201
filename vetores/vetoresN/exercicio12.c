#include <stdio.h>


main(){
    int numeros[5], maior=0, menor, soma = 0, media;
    
    for(int i = 0; i < 5; i++){
        printf("Digite os valores: ");
        scanf("%d", &numeros[i]);
    }

     for (int i = 0; i < 5; i++){
         soma += numeros[i];
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }
    media = soma/5;

    for(int i = 0; i < 5; i++){
        printf("\n%d", numeros[i]);
    }
    printf("Maior valor: %d. Menor valor: %d. Media %d", maior, menor, media);

}