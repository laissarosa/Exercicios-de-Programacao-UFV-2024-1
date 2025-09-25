#include <stdio.h>
int main () {
int num=1,impar=0,soma=0,n;

printf ("entre com o valor de n");
scanf ("%d", &n);

while (impar<n) {
        if (num%2==0) { //se for verdadeiro aumenta o numero e pula com continue
            num++;
            continue;
        } else { //se if for falso entra aqui
        soma+=num; //recebe o proprio soma mais o numero impar
        num++; //aumenta o numero digitado
        impar++; //aumenta a quantidade(soma) de impares//conta
        }

}
printf ("A soma dos n numeros impares e: %d", soma);
}

