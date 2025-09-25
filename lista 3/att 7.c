#include <stdio.h>

int main () {
int idade,cont=0;//declarar cont=-1
float soma;

do {
printf ("Entre com as idades: \n");
    scanf ("%d", &idade);

    soma+=idade;
    cont++; } while (idade>0);


if (cont>0) {
    printf ("A media das idades e: %.2f! \n", soma/cont);
}
 return 0;
}
