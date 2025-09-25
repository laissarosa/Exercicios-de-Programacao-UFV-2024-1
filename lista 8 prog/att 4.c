#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

void soma(struct Vetor *v1, struct Vetor *v2, struct Vetor *res) {
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;
}

int main() {
    int i;
    struct Vetor vet[2], resultado;

   for (i=0 ; i<2; i++) {
        printf("Entre com 3 valores para o vetor %d: \n", i + 1);
        scanf("%f %f %f", &vet[i].x, &vet[i].y, &vet[i].z);
    }

    soma(&vet[0], &vet[1], &resultado);

    printf("Resultado: x: %.2f \n y: %.2f \n z: %.2f \n", resultado.x, resultado.y, resultado.z);

    return 0;
}
