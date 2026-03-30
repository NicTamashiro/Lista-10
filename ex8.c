#include <stdio.h>

int main(){

    int idade = 0, soma = 0, media;
    int divisor = 0;

    while(idade >= 0 && idade <= 100){
        printf("Qual a sua idade? (negativo ou acima de 100 para encerrar)\n");

        if(scanf("%d", &idade) == 0){
            printf("Entrada invalida! Digite apenas numeros.\n");
            scanf("%*s"); //sai do buffer, senao da loop infinito
        } else if(idade >= 0 && idade <= 100){
            soma += idade;
            divisor++;
        }
    }

    if(divisor > 0){
        media = soma / divisor;
        printf("Media de idade da cidade de Santos: %d\n", media);
    } else {
        printf("Nenhuma idade valida foi informada.\n");
    }

    return 0;
}

    /* Tabela de execucao do loop:

    - 1 loop
    idade = 17
    soma = 17
    divisor = 1

    - 2 loop
    idade = 10
    soma = 27
    divisor = 2

    - 3 loop
    scanf("%d") tenta ler 'a', retorna 0
    entra no if -> "Entrada invalida! Digite apenas numeros."
    scanf("%*s") descarta 'a' do buffer

    - 4 loop
    idade = 20
    soma = 47
    divisor = 3

    - 5 loop
    idade = 120 -> sai do while
    media = 47 / 3
    "Media de idade da cidade de Santos: 15"

    */
