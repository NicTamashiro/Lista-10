#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes: (a), (b) e (c)\n");
    if(scanf("%f %f %f", &a, &b, &c)!= 3){
        printf("Erro: Digite apenas numeros.\n");
        return 1;
    }

    if(a == 0){
        printf("Erro: coeficiente 'a' nao pode ser zero.\n");
        return 1;
    }

    delta = (b*b) - 4*a*c;

    if(delta < 0){
        printf("Nao ha solucao real.\n");
        return 1;
    }

    if(delta == 0){
        x1 = -b / (2*a);
        printf("Raiz dupla: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrtf(delta)) / (2*a);
        x2 = (-b - sqrtf(delta)) / (2*a);
        printf("x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
