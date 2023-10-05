#include<stdio.h>

main(){
    char olhos, cabelos, sexo;
    int contadorGeral = 0, contadorM =0, contadorF =0, contadorEspecifico = 0, idade;
    float salario, porcentagem;

    do{
        contadorGeral++;
        //validacao sexo
        do{
            fflush(stdin);
            printf("Digite o sexo: (m ou f)");
            scanf("%c", &sexo);
            if(sexo == 'm'){
                contadorM++;
            }else if(sexo == 'f'){
                contadorF++;
            }
            if(sexo != 'm' && sexo != 'f'){
                printf("Opcao invalida\n");
            }
        }while(sexo != 'm' && sexo != 'f');
     //validacao olhos
        do{
            fflush(stdin);
            printf("Digite a cor dos olhos: (c - castanho , p - preto , v - verdes, a - azuis)");
            scanf("%c", &olhos);
            if(olhos != 'p' && olhos != 'v'  && olhos != 'a'  && olhos != 'c'){
                printf("Opcao invalida\n");
            }
        }while(olhos != 'p' && olhos != 'v'  && olhos != 'a'  && olhos != 'c');

        //validacao cabelos
        do{
            fflush(stdin);
            printf("Digite a cor dos cabelos: (c - castanho , p - preto , l - loiro, r - ruivo)");
            scanf("%c", &cabelos);
            if(cabelos != 'p' && cabelos != 'r'  && cabelos != 'l'  && cabelos != 'c'){
                printf("Opcao invalida\n");
            }
        }while(cabelos != 'p' && cabelos != 'r'  && cabelos != 'l'  && cabelos != 'c');

        do{
            printf("Digite a salario");
            scanf("%f", &salario);
            if(salario < 0){
                printf("Opcao invalida\n");
            }
        }while(salario < 0);

        do{
            printf("Digite a idade");
            scanf("%d", &idade);
            if(idade < 10 || idade > 100){
                printf("Opcao invalida\n");
            }
        }while(idade < 10 || idade > 100);

        if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && (idade > 15 && idade < 35)){
            contadorEspecifico++;
        }

        printf("Deseja um cadastrar um novo habitante? 1 sim  -1 Não ");
        scanf("%d", &idade);
    }while(idade != -1);

    porcentagem = (float)contadorEspecifico / contadorGeral * 100;

    printf("Total geral: %d",contadorGeral);
    printf("\nTotal homens: %d",contadorM);
    printf("\nTotal mulheres: %d",contadorF);
    printf("\nTotal caracteristicas especificas: %d",contadorEspecifico);
    printf("\nPorcentagem caracteristicas especificas: %f",porcentagem);

}