#include <stdio.h>
#include <math.h>

int main () {
float a, b;
printf ("Digite os valores de A e B: \n ");
scanf ("%f %f", &a , &b);

printf ("HIPOTENUSA: %.2f \n", sqrt(a*a + b*b) );

return 0;
}

