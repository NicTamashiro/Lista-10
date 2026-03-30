#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Erro: entrada invalida!\n");
        return 1;
    }

    printf("Digite a operacao matematica (+), (-), (*), (/), (^): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Erro: entrada invalida!\n");
        return 1;
    }

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("%.2lf x %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero e indefinida!\n");
                return 1;
            }
            resultado = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '^':
            resultado = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        default:
            printf("Erro: operacao '%c' invalida!\n", operacao);
            return 1;
    }

    return 0;
}
