#include<stdio.h>

main(){

    int num = 10;
    int contador;
    int res;

    for(contador = 1; contador <= 10; contador *=2 ){
        res = num * contador;
             printf(" \n%d x %d = %d",num , contador, res);
    }
    printf("Fim do loop");

}
