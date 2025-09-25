#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont_num=0, i, j;
    int vet[5];

    int *alocar= (int*)malloc(5*sizeof(int));
    if (alocar == NULL) {
        printf("Nao foi possivel alocar memoria.\n");
        return 1;
    }

    printf("Entre com um numero:\n");

    for (i=0 ; i<5; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] >= 0) {
            cont_num++;
        } else {
            alocar = (int*)realloc(alocar, cont_num * sizeof(int));
            if (alocar == NULL) {
                printf("Nao foi possivel realocar memoria.\n");
                return 1;
            }
            for (i=0; i<cont_num; i++) {
                printf("%d\n", vet[i]);
            }
        }
    }

    if (cont_num >= 4) {
        int *realocar = (int*)realloc(alocar,10*sizeof(int));
        if (realocar == NULL) {
            printf("Nao foi possivel realocar memoria.\n");
            return 1;
        }

        alocar = realocar;

        printf("Entre com mais numeros: \n");
        for (i=5; i<10; i++) {
            scanf("%d", &vet[i]);
            alocar[i]= vet[i];

        if (vet[i] >= 0) {
            cont_num++;
        } else {
            alocar=(int*)realloc(alocar,cont_num*sizeof(int));
            if (alocar == NULL) {
                printf("Nao foi possivel realocar memoria.\n");
                return 1;
            }
            for (j=0; j<cont_num; j++) {
                printf("%d\n", vet[j]);
            }
        }
        }

        for (i=0; i<10; i++) {
            printf("%d ", alocar[i]);
        }
    }

    free(alocar);

    return 0;
}


