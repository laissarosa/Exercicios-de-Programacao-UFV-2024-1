#include <stdio.h>
int main () {

char str[11];
int i;

printf ("Entre com a string \n");
gets (str);

for (i=0;i<10;i++) {
 if (str[i]!='a'&& str[i]!= 'e'&& str[i]!= 'i' && str[i]!= 'o' && str[i]!= 'u' && str[i]!= 'A'&& str[i]!= 'E'&& str[i]!= 'I'&& str[i]!= 'O'&& str[i]!= 'U')
 printf ("%s", str[i]);
}

return 0;
}
