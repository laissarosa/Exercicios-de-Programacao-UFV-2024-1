#include <stdio.h>
#include <stdlib.h>

int maior (int x, int y) {
    if (x>y)
        return printf ("maior: %d \n", x);
    else if (x<y)
        return printf ("maior: %d \n", y);
    else
        return printf ("Numeros iguais! \n");

}

int main () {
int num1, num2;

printf ("Entre com dois numeros: \n");
scanf ("%d %d", &num1, &num2);

maior (num1, num2);
return 0;
}
