#include <stdio.h>

int main () {
int numero, n , soma=1;

printf ("digite um numero  \n");
scanf ("%d", &numero);

for (n=1;n<=numero;n++) {
    soma=soma*n;
}

printf ("o fatorial de %d e %d. \n",numero,soma);
return 0;
}


