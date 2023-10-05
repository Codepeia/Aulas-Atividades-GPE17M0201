#include<stdio.h>

main(){
    //declaracao e atribuição

    int numeros[5] = {20, 100, 350, 1, 30};

    printf("\n%d",numeros[0]);
    printf("\n%d",numeros[1]);
    printf("\n%d",numeros[2]);
    printf("\n%d",numeros[3]);
    printf("\n%d",numeros[4]);

    numeros[2] = 100;

    
    printf("\n%d",numeros[0]);
    printf("\n%d",numeros[1]);
    printf("\n%d",numeros[2]);
    printf("\n%d",numeros[3]);
    printf("\n%d",numeros[4]);

}