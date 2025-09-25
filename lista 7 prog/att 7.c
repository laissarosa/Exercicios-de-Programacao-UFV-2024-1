#include <stdio.h>
#include <stdlib.h>

float num_n(int N) {
    float soma= 0.0, numerador, denominador;
    int i;

    for (i=1; i<=N; i++) {
        numerador = i*i+ 1;
        denominador = i+ 3;
        soma += numerador/ denominador;
    }

    return soma;
}

int main() {
    int num;

    printf("Entre com o valor de N: ");
    scanf("%d", &num);

    printf(" O resultado eh: %.2f \n", num_n(num));

    return 0;
}
