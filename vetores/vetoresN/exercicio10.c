#include <stdio.h>
#define TAM 15

main(){
    float notas[TAM], media, soma = 0;

    for(int i = 0; i < TAM; i++){
        printf("Digite as notas: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    media = soma/TAM;

    printf("Media da turma: %.2f",media);

}