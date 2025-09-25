#include <stdio.h>

int main () { // quest 4 correct!
char str [10];
int i=0, vogal=0, consoante=0;

printf ("Entre com a string: \n");
for (i=0;i<10;i++)
scanf("%c", &str[i]);

for (i=0; i<10 && str[i]!='\0' &&str[i]!= '\n';i++) {

if (str[i]== 'a'|| str[i]== 'e' || str[i]== 'i' || str[i]== 'o'  || str[i]== 'u' || str[i]== 'A'|| str[i]== 'E'|| str[i]== 'I'|| str[i]== 'O' || str[i]== 'U')
        vogal++;
        else if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')) {
 consoante++;}

}

    printf ("Quantidade de consoantes: %d \n", consoante);
    printf ("Quantidade de vogais: %d \n", vogal);


return 0;}
