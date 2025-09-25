#include <stdio.h>

int main () {

float vet[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
int *p;

p = vet;

for (int i=0; i<10; i++) {
         printf ("%d \n ", p[i]);
}
    return 0;
}

