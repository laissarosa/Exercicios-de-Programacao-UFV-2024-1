#include <stdio.h>

void exibir(int *n) {
    int i;

    for (i= 1; i <= *n ; i+=3) {
        printf ("%d \n", i);
    }
}

int main () {
int numero;

printf (" Entre com um numero: \n ");
scanf ("%d", &numero);

exibir(&numero);

return 0;
}
