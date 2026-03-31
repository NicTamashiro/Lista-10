#include <stdio.h>
 
int main(){
    int a, b, troca;
 
    printf("Digite o valor de A: ");
    if(scanf("%d", &a) != 1){
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
 
    printf("Digite o valor de B: ");
    if(scanf("%d", &b) != 1){
        printf("Erro: Digite apenas numeros inteiros.\n");
        return 1;
    }
 
    printf("Antes da troca: A = %d e B = %d\n", a, b);
 
    troca = a;
    a = b;
    b = troca;
 
    printf("Depois da troca: A = %d e B = %d\n", a, b);
 
    return 0;
}