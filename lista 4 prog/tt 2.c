#include <stdio.h>

int main () {
int num [10], impar, i;

/*leia um vetor de inteiros com 10
 posi��es e mostre os n�meros �mpares e a quantidade de n�meros �mpares do
 vetor*/

 printf ("Entre com os 10 numeros: \n");

 for (i=0; i<10;i++) {
        scanf("%d", &num[i]);


        if ( num[i]%2!=0) {
            printf("%d\n", num[i]); // a contagem dos impares esta correta, menos a impressao na tela
            impar++;
        }
 }
 printf ("%d numeros impares!", impar);
return 0;
}
