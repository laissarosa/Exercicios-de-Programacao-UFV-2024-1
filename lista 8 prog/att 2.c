#include <stdio.h>

int main () {
     char carac, *c;
     float real, *r;
     int inteiro, *i;

     printf (" Entre com um caractere, um numero real e outro inteiro: \n");
     scanf (" %c %f %d", &carac, &real, &inteiro);

     c = &carac;
     r = &real;
     i = &inteiro;

     printf (" Antes da modificacao: %c , %.2f , %d \n", carac , real, inteiro);

     *c = 'b';
     *r = 8.0;
     *i = 1;

     printf ("Apos a modificacao: %c , %2.f , %d \n " , carac , real, inteiro);

return 0;
}
