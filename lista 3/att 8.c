#include <stdio.h>
int main (){
float i, preco,consumo,somaconsu=0,maconsu=0,meconsu=0;

printf ("Entre com o preco do kwh:");
scanf ("%f", &preco);

printf ("Entre com os kwh consumidos para cada residencia:");
for (i=0;i<15;i++) {
    scanf ("%f", &consumo);
    somaconsu+=consumo;

    if (consumo>maconsu) {
        maconsu=consumo;
    }
    else {
        meconsu=consumo;}

}
printf ("O consumo medio verificado foi: %.2f \n", somaconsu/15);
printf ("O maior consumo foi: %.2f \n ", maconsu);
printf ("O menor consumo foi: %.2f \n", meconsu);

return 0;
}
