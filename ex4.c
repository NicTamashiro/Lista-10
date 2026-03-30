#include <stdio.h>

int main(){

    int qtd;
    float valor_unidade = 3.60;
    float novo_valor = 2.50;

    printf("Digite a quantidade de latas que deseja comprar: ");

    if(scanf("%d", &qtd) != 1){
        printf("Erro: Digite um numero inteiro.");
        return 1;
    }
    if(qtd <= 0){
        printf("Erro: Digite um numero positivo.");
        return 1;
    }

    if(qtd < 12){
        printf("Valor a pagar: R$%.2f\n", qtd*3.60);
    } else {
        printf("Valor a pagar: R$%.2f\n", qtd*2.50);
    }

    return 0;
}
