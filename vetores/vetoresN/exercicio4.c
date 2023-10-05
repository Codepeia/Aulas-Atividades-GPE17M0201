#include <stdio.h>

main()
{

    int vetor[8], x, y, soma = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite os valores");
        scanf("%d", &vetor[i]);
    }

    do{
        printf("Digite o valores de x(0 - 7)");
        scanf("%d", &x);
        printf("Digite o valores de y(0 - 7)");
        scanf("%d", &y);

        if ((x >= 0 && x < 8) && (y >= 0 && y < 8)){

            for (int i = 0; i < 8; i++){
                if (i == x ){
                    soma += vetor[i];
                }else if(i == y){
                    soma += vetor[i];
                }
            }
        }else{
            printf("Indices errados.");
        }

    }while(x < 0 || x > 7 && y < 0 || y > 7);
    printf("Soma: %d", soma);
}