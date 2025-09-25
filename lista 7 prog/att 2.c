#include <stdio.h>
#include <math.h>

float hipotenusa (float a, float b) {
   return sqrt (a*a + b*b);

};

int main () {
float x, y;
printf ("Digite os valores de A e B: \n ");
scanf ("%f %f", &x , &y);

printf ("HIPOTENUSA: %.2f \n", hipotenusa(x, y) );

return 0;
}
