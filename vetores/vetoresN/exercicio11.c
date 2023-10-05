#include <stdio.h>


main(){
    int numeros[5], negativos = 0, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite os valores: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] < 0){
            negativos++;
        }else{
            soma += numeros[i];
        }
    }
    printf("Quantidade negativos: %d e soma dos positivos: %d", negativos, soma);
}