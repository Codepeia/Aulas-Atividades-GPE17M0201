#include<stdio.h>

main(){

    //vetor de nomes

    char nomes[3][20] = {"Maria", "Pedro Lucas", "Jose"};

    for(int i = 0; i < 3; i++){
        printf("\nNome: %s",nomes[i]);
    }

    char alunos[3][20];

     for(int i = 0; i < 3; i++){
        printf("\n\nDigite o nome: ");
        fgets(alunos[i], 20,stdin);
        fflush(stdin);
     }
    for(int i = 0; i < 3; i++){
        printf("\n Aluno: %s",alunos[i]);
    }



   
}