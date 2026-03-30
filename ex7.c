#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
        printf("Erro: '%c' nao eh uma letra\n", c);
        return 1;
    }

    if (c >= 'A' && c <= 'Z'){
        c = c + 32;
    }

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("'%c' eh uma VOGAL\n", c);
    }
    else {
        printf("'%c' eh uma CONSOANTE\n", c);
    }


    return 0;
}
