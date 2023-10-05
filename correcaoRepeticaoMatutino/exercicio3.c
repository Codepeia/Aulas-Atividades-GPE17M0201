#include<stdio.h>

main(){
    /*
    Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).  
    */
   int numero, c = 1;

   printf("Digite um numero");
   scanf("%d",&numero);

   /*for(int c = 1; c <= numero; c+=2){
        printf("\n%d", c);
   }*/

 /*for(int c = 0; c <= numero; c++){
        if(c % 2 == 1){
            printf("\n%d", c);
         }
   }*/

   while(numero > 0){
        printf("\n%d", c);
        c += 2;
        numero--;
   }
}
