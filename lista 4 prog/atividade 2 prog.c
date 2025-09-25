#include <stdio.h>
#include <string.h>

int main () {
int num [10]={1,2,3,4,5,6,7,8,9,0};
int impar, i=0;

/*leia um vetor de inteiros com 10
 posições e mostre os números ímpares e a quantidade de números ímpares do
 vetor*/

 for (i=0; i<10;i++) {

        if ( num[i]%2!=0) {
          printf(" Numeros impares: %d\n", num[i]); // a contagem dos impares esta correta, menos a impressao na tela
            impar++;
        }
 }
 printf (" Quantidade de impares: %d \n ", impar);

return 0;
}
