#include <stdio.h>

main(){

    int vetor[10],pares = 0;

    for (int i = 0; i < 10; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("\nO numero digitado e par: %d", vetor[i]);
            pares++;
        }else{
            printf("\nO numero digitado e impar %d", vetor[i]);
        }
    }
    printf("Total de pares: %d", pares);


}