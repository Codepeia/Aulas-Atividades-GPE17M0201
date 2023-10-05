#include<stdio.h>

#define TAM 5

main(){

    //vetor de notas

    float notas[TAM];
    float soma, media;
   
    for(int i = 0; i < TAM; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < TAM; i++){
        soma += notas[i];
        printf("\n Nota: %d %.2f", i+1, notas[i]);  
    }
    media = soma/TAM;

    printf("Media da turma: %f", media);
   



}