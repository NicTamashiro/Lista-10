#include <stdio.h>

int main(){

    int valor, limite;

    printf("Digite o valor: ");

    if(scanf("%d", &valor)!=1){
        printf("Erro: Digite apenas numeros.\n");
        return 1;
    }

    printf("Digite o limite: ");

    if(scanf("%d", &limite)!=1){
        printf("Erro: Digite apenas numeros.\n");
        return 1;
    }

    if (limite <= 0) {
        printf("Erro: O limite deve ser um numero positivo.\n");
        return 1;
    }


    for(int i = 1; i<=limite; i++){
        printf("%d x %d = %d\n",valor, i, valor*i);
    }


    return 0;
}
