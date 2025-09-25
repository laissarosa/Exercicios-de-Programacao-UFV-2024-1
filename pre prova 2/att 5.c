#include <stdio.h>
#include <string.h>

int main () {
char nome[25];
int i, tam=0;

printf ("Entre com o nome completo: \n");
gets(nome);


for (i=0;nome[i]!='\0';i++) {
    if (nome[i]!=' ') {
        tam++;
        }
}
printf ("Quantidade de letras: %d \n", tam);
return 0;
}
