#include <stdio.h>
int main () {
int numero,soma=0;

do {
    printf ("Digite um numero");
    scanf ("%d", &numero);
    if (numero>0) {
    soma+=numero;}
    } while (numero>0);

printf ("A soma de todas os valores positivos e %d", soma);
return 0;
}

