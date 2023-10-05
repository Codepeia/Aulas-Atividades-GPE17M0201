#include <stdio.h>


main(){
    /*
    Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
    */

   int A , B , C ;

   printf("Digite o valor de A");
   scanf("%d",&A);
   printf("Digite o valor de B");
   scanf("%d",&B);
   printf("Digite o valor de C");
   scanf("%d",&C);

    if(A < B && A < C){
        if(B < C){
            printf("%d, %d, %d", A, B, C);
        }else{
            printf("%d, %d, %d", A, C, B);
        }
    }else if(B < A && B < C){
        if(A < C){
            printf("%d, %d, %d", B, A, C);
        }else{
            printf("%d, %d, %d", B, C, A);
        }
    }else{
         if(A < B){
            printf("%d, %d, %d", C, A, B);
        }else{
            printf("%d, %d, %d", 68, B, A);
        }
    }

}