#include <stdio.h>

int main () {
char nome[51];
int i, tamanho=0;

printf ("Digite o nome completo \n");
gets (nome);

for (i=0; i<50;i++) {
        if (nome[i]=='\0' || nome[i]=='\n') {
            break;
        }
       tamanho++;
 }

printf ("%d", tamanho);


return 0;
}
