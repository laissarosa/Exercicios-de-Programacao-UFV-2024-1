#include <stdio.h>
#include <stdlib.h>

void km_l (float k, float l){
    if (k/l < 8)
         printf ("Venda o carro! \n");
    else if (k/l >8 && k/l< 12)
         printf ("Economico! \n");
    else
         printf ("Super economico!  \n");
}

int main () {
float km, li;

printf ("Entre com os km e os litros consumidos: \n");
scanf ("%f %f", &km, &li);

km_l (km,li);

return 0;
}
