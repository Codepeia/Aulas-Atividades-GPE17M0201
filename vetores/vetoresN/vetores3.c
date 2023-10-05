#include<stdio.h>

main(){
    //declaracao e atribuição
    int num[5], soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d",&num[i]);
    }

    //soma = num[0]+ num[1]+ num[2]+ num[3]+ num[4];

    for(int i = 0; i < 5; i++){
        soma += num[i];
        printf("\n%d %d", i, num[i]);
    }
    printf("\n%d", soma);
}