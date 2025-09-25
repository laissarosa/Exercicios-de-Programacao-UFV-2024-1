#include <stdio.h>
#include <stdlib.h>

char alocar(int tam) {
    int *tam_str = (int*)malloc(tam*sizeof (int));
            if (tam_str == NULL) {
                printf ("Nao foi possivel alocar memoria! \n");
                return 1;
            }

            char str[tam];

    printf ("Entre com a string: \n");
    fflush (stdin);
    gets (str);

    for (int i=0; i<tam; i++) {
        if (str[i]!= 'a'&& str[i]!=  'e' && str[i]!=  'i' && str[i]!=  'o' && str[i]!=  'u') {
            printf ("%c", str[i]);
        }
    }
    free (tam_str);
}


int main () {
    int n;

    printf ("Entre com o tamanho da string: \n");
    scanf ("%d", &n);
    alocar(n);

    return 0;
}
