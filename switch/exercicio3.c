#include<stdio.h>
#include<string.h>

main(){

    int sobremesa, prato, bebida, totalCalorias;
    char p[30], s[30],b[30];



    do{

    printf("Escolha o prato: 1- vegetariano(180), 2- peixe(230), 3 - frango(250), 4 - carne(350)");

    scanf("%d", &prato);
         switch(prato){
        case 1:
           totalCalorias = 180; 
           strcpy(p, "Vegetariano");
            break;
        case 2:
            totalCalorias = 230; 
            strcpy(p, "Peixe");
            break;

        case 3:
            totalCalorias = 250; 
            strcpy(p, "Frango");
            break;
        case 4:
            totalCalorias = 350; 
            strcpy(p, "Carne");
            break;
    }
}while(prato < 1 || prato > 5);


do{

    printf("Escolha o sobremesa: 1- abacaxi(75), 2- sorvete(110), 3 - mousse(170), 4 - chocolate(200)");
    scanf("%d", &sobremesa);

    switch(sobremesa){
        case 1:
           totalCalorias += 75; 
           strcpy(s, "abacaxi");
            break;
        case 2:
            totalCalorias += 110; 
            strcpy(s, "Sorvete");
            break;

        case 3:
            totalCalorias += 170; 
            strcpy(s, "mousse");
            break;
        case 4:
            totalCalorias += 200; 
            strcpy(s, "chocolate");
            break;
    }
}while(sobremesa < 1 || sobremesa > 5);

do{

    printf("Escolha o bebida: 1- cha(20), 2- laranja(70), 3 - melao(100), 4 - refri(65)");
    scanf("%d", &bebida);

switch(bebida){
        case 1:
           totalCalorias += 20; 
           strcpy(b, "cha");
            break;
        case 2:
            totalCalorias += 70; 
            strcpy(b, "laranja");
            break;

        case 3:
            totalCalorias += 100; 
            strcpy(b, "melao");
            break;
        case 4:
            totalCalorias += 65; 
            strcpy(b, "refri");
            break;
    }
}while(bebida < 1 || bebida > 5);

    printf("Resumo refeicao:\n Prato: %s \n Sobremesa: %s \n Bebida: %s ", p, s, b);
    printf("Total de calorias: %d", totalCalorias);


}