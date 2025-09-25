#include <stdio.h>
#include <stdlib.h>

int repetido(int *vet, int tamanho, int numero) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] == numero) {
            return 1;
        }
    }
    return 0;
}
void ler_numeros(int *vet, int tamanho) {
    int numero;
    for (int i = 0; i < tamanho; ) {
        printf("Entre com os numeros do sorteio: \n ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 20) {
            printf(" Numero fora do intervalo permitido! \n");
        } else if (repetido(vet, i, numero)) {
            printf("Numero ja digitado! Tente novamente.\n");
        } else {
            vet[i] = numero;
            i++;
        }
    }
}

int encontrar_corretos(int *sorteio, int *bilhete) {

    int *corretos = (int *)malloc(6* sizeof(int));
    if (corretos == NULL) {
        printf("Nao foi possível alocar memória!\n");
        exit(1);
    }

    int count = 0;
    for (int i = 0; i<6; i++) {
        for (int j = 0; j<6; j++) {
            if (sorteio[i] == bilhete[j]) {
                corretos[count++] = sorteio[i];
                break;
            }
        }
    }

    printf(" \n Numeros corretos: \n ");
    for (int i = 0; i < count; i++) {
        printf(" %d, ", corretos[i]);
    }
    free(corretos);
    return count;
}

int main() {
    int sorteio[6], bilhete[6];


    ler_numeros(sorteio, 6);

    printf("\nDigite os 6 numeros do seu bilhete:\n");
    ler_numeros(bilhete, 6);

    int num_corretos = encontrar_corretos(sorteio, bilhete);

    printf("\nNumeros sorteados: \n ");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", sorteio[i]);
    }

    printf("\nTotal de numeros corretos: %d\n", num_corretos);

    return 0;
}

