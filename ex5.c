#include <stdio.h>
#include <math.h>

int main(){

    float x1,y1,x2,y2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto: \n");
    if(scanf("%f %f", &x1, &y1)!=2){
        printf("Erro: Entrada invalida, digite dois numeros.");
        return 1;
    }
    printf("Digite as coordenadas do segundo ponto: \n");
    if(scanf("%f %f", &x2, &y2)!=2){
        printf("Erro: Entrada invalida, digite dois numeros.");
        return 1;
    }

    distancia = sqrtf((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("Distancia entre eles: %.2f\n", distancia);

    return 0;
}
