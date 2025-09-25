#include <stdio.h>

void preencheVetor(int *vet, int n) {
    int i;
     for (i=0; i<n; i++) {
        printf ("Entre com os elementos do vetor: \n");
        scanf ("%d", &vet[i]);
     }
}

 void imprimeVetor(int *vet, int n) {
     int i;
      for (i=0; i<n; i++) {
        printf ("%d \n", vet[i]);
      }
 }
int retornaMaiorElemento(int *vet, int n) {
    int i, maiornum= vet[0];
     for (i=1; i<n; i++) {
        if (vet[i]> maiornum)
            maiornum= vet[i];
     }

     return maiornum;
}

int main () {
    int vet[5];

    preencheVetor (vet, 5);
    imprimeVetor (vet, 5);
    printf ("Maior elemento: %d \n " , retornaMaiorElemento(vet,5) );

return 0;
}
