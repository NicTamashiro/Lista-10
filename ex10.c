#include <stdio.h>

int main() {

    int n, i;
    int primo = 1;

    printf("Digite um numero entre 2 e 998: ");

    if(scanf("%d", &n) != 1) {
        printf("Entrada invalida\n");
        return 1;
    }

    if(n <= 1 || n >= 999){
        printf("Erro: Digite um numero entre 2 e 998.\n");
        return 1;
    }

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            primo = 0;
        }
    }

    if(primo == 1) {
        printf("E primo\n");
    } else {
        for(i = 1; i <= n; i++) {
            if(n % i == 0) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
