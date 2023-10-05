#include <stdio.h>


main(){
    /*
    Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
    */
   int A = 1, B = 1000, C = 0, D = -10, maior, menor;

    //achar o maior de todos

    if(A > B && A > C && A > D){
        maior = A;
    }else if(B > C && B > D && B > A){
        maior = B;
    }else if(C > A && C > B && C > D){
        maior  = C;
    }else{
        maior = D;
    }
       //achar o menor de todos
    if(A < B && A < C && A < D){
        menor = A;
    }else if(B < C && B < D && B < A){
        menor = B;
    }else if(C < A && C < B && C < D){
        menor  = C;
    }else{
        menor = D;
    }

    printf("Maior: %d", maior);
    printf("\nMenor: %d", menor);

   /*if(A > B && A > C && A > D){
        printf("A e o maior");
        //achar o menor entre B, C e D
        if(B < C && B < D){
            printf("\nB e o menor");
        }else if(C < B && C < D){
            printf("\nC e o menor");
        }else{
            printf("\nD e o menor");
        }


   }else if(B > A && B > C && B > D){
        printf("B e o maior");
        //achar o menor entre A, C e D
        if(A < C && A < D){
            printf("\nA e o menor");
        }else if(C < A && C < D){
            printf("\nC e o menor");
        }else{
            printf("\nD e o menor");
        }

   }else if(C > A && C > B && C > D){
        printf("C e o maior");
        //achar o menor entre A, B e D
        if(A < B && A < D){
            printf("\nA e o menor");
        }else if(B < A && B < D){
            printf("\nB e o menor");
        }else{
            printf("\nD e o menor");
        }
   }else{
        printf("D é o maior");
        //achar o menor entre A, B e C
        if(A < B && A < C){
            printf("\nA e o menor");
        }else if(B < A && B < C){
            printf("\nB e o menor");
        }else{
            printf("\nC e o menor");
        }
   }*/





}