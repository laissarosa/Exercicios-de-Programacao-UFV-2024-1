#include <stdio.h>

int main () {
//att 3 correta
float num[15];
int i, codigo;

printf ("Entre com os numeros: \n");

for (i=0; i<15; i++){

scanf ("%f", &num[i]);
}

printf ("Agora digite o codigo: \n 1- para imprimir em ordem direta \n 2- para imprimir em ordem inversa \n");
scanf ("%d", &codigo);

if (codigo==1) {
        for (i=0; i<15;i++)
printf ("%.1f", num[i]);
}
else if (codigo==2) {
    for (i=14; i>=0;i--)
    printf ("%.1f", num[i] );
}

else
    printf ("Codigo invalido!");



return 0;}
