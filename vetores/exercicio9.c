#include<stdio.h>

int main(){
    
    int vetor[6], contador = 0, num;
    
    //solucao1 
   /* do{
        printf("\nDigite numero par");
        scanf("%d",&num);
        if(num % 2 == 0){
            vetor[contador] = num;
            contador++;
        }else{
            printf("Numero impar - Digite um numero par");
        }
    }while(contador < 6);*/

    //solucao 2
    for(int i = 0 ; i < 6; i++){
        do{
            printf("\nDigite numero par");
            scanf("%d", &vetor[i]);
            if(vetor[i] % 2 != 0){
               printf("\nInvalido");  
            }
        }while(vetor[i] % 2 != 0);

    }
    //mostrando o vetor
   /* for(int i = 0 ; i < 6; i++){
        printf("\n%d",vetor[i]);
    }*/
    
    //mostrando o vetor na ordem inversa
    for(int i = 5 ; i >= 0; i--){
        printf("\n%d",vetor[i]);
    }

}