#include <stdio.h>

int main (){
char str[10];
int i;

printf ("entre com a string: \n");

for (i=0;i<10;i++){
    gets (str);
}

for (i=0;i<10;i++){
    if (str[i]=='?'||str[i]=='+'||str[i]=='='||str[i]=='-'||str[i]=='!')
        printf ("$");
    else if (str[i]!='?'||str[i]!='+'||str[i]!='='||str[i]!='-'||str[i]!='!')
        printf ("%c", str[i]);
}


return 0;
}
