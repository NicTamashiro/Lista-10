#include <stdio.h>

int main(){

    float salario, percentual;

    printf("Digite seu salario: R$ ");

    if(scanf("%f", &salario)!= 1){
        printf("Erro: Digite apenas numeros.\n");
        return 1;
    }

    if(salario <= 0){
        printf("Erro: Digite um numero positivo.");
        return 1;
    }

    if(salario < 2500){
        percentual = 15;
    } else if(salario <= 5000){
        percentual = 10;
    } else {
        percentual = 5;
    }

    printf("Novo salario com reajuste de %.0f%%: R$%.2f\n", percentual, salario*(1+ percentual/100));

    return 0;
}
