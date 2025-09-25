#include<stdio.h>

int main () {
int vetA[10], vetB[10], vetC[10];
int i,k;

printf ("Entre com os valores do vetor A: \n");
for (i=0; i<10;i++) {
scanf ("%d", &vetA[i]);
}

printf ("Entre com os valores do vetor B: \n");
for (i=0; i<10;i++) {
scanf ("%d", &vetB[i]);
}

for (k=0,i=0;k<10;k++,i++) {
vetC[k]= vetA[i]-vetB[i];
printf ("Os elementos no vetor c sao %d \n", vetC[k]);
}

return 0;
}
