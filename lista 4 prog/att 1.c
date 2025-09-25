#include <stdio.h>

int main() {
    int notas[10];
    int i, n2=0, n3=0, n5=0;

    printf("Entre com as notas:\n");

    for (i=0; i<10;i++) {
        scanf("%d", &notas[i]);

        if (notas[i] < 0 || notas[i] > 10) {
            printf("Entre com um numero valido!\n");
            i--;
        }
    }

    for (i = 0; i < 10; i++) {
        if (notas[i]==2)
            n2++;
         else if (notas[i] ==3)
            n3++;
         else if (notas[i]== 5)
            n5++;
     }

    printf("Notas 2: %d \n Notas 3: %d\n Notas 5: %d\n", n2, n3, n5);

    return 0;
}
