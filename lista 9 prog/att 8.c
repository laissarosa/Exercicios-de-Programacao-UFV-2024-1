#include <stdio.h>

int mdc(int x , int y){
    if (y == 0)
        return x;
    else
        return mdc (y, x%y);
}

int main () {
    int num1, num2;

    printf ("Entre com dois numeros: \n");
    scanf ("%d %d", &num1, &num2);

   printf ("MDC: %d",mdc (num1, num2));

return 0;
}


