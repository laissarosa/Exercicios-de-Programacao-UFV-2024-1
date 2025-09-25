#include <stdio.h>
#include <string.h>

int main () {

char nome[30], sobrenome[10], ultnome[10];

printf ("Entre com o primeiro nome: \n");
gets (nome);

printf ("Entre com o sobrenome: \n");
gets (sobrenome);

printf ("Entre com o ultimo nome: \n");
gets (ultnome);

strcat (nome, sobrenome);
strcat (nome, ultnome);

printf ("%s \n", nome);

return 0;
}
