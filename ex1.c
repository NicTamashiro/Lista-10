#include <stdio.h>

int main (){
    int a,b,troca;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Antes da troca: A = %d e B = %d\n", a,b);

    troca = a;
    a = b;
    b = troca;

    printf("Depois da troca: A = %d e B = %d\n", a,b);

}
