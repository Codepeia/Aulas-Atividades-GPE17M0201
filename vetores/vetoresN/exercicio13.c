#include<stdio.h>

main(){
    int valores[5], maior, menor, pMaior = 0, pMenor = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero");
        scanf("%d",&valores[i]);
    }
    maior = valores[0];
    menor = valores[0];

    for(int i = 0; i < 5; i++){
        if(valores[i] > maior){
            maior = valores[i];
            pMaior = i;
        }
        if(valores[i] < menor){
            menor = valores[i];
            pMenor = i;
        }
    }
    printf("Maior: %d na posicao %d. Menor %d na posicao: %d", maior, pMaior, menor, pMenor);



}