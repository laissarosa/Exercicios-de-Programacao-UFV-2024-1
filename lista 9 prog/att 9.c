#include <stdio.h>

int encontrar(int vetor[], int n) {
    if (n == 0)
        return vetor[0];

    int maior = encontrar(vetor, n-1);
    if (vetor[n]> maior)
        return vetor[n];
    else
        return maior;
}

int main() {
    int vet[3], i;

    for (i=0; i<3; i++) {
        printf ("Entre com os elementos do vetor: \n");
        scanf ("%d", &vet[i]);
    }

    int maior = encontrar(vet, 2);

    printf("O maior valor no vetor eh: %d\n", maior);

    return 0;
}
