#include<stdio.h>

main(){
    
    int vetor[3] = {1, 2, 3};

    for(int i = 0; i < 3; i++){
        if(i == 2){
            vetor[i] = 100;
        }
    }
    for(int i = 0; i < 3; i++){
        printf("\n%d",vetor[i]);
    }




}