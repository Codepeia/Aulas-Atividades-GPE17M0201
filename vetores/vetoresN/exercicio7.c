#include <stdio.h>
#include<limits.h>

main(){

    int vetor[5], maior = INT_MIN, menor = INT_MAX, pMaior, pMenor;

    for (int i = 0; i < 5; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++){
    
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i;
        }
    }
    printf("Maior valor: %d. Menor valor: %d", maior, menor);
}   