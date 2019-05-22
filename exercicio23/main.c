#include <stdio.h>

int main()
{
    char palavra[60];
    int i;
    int j;
    int x=0;

    printf("digite um texto: ");

    fgets(palavra, 150, stdin);

    j = strlen(palavra);

    for(i=0; palavra[i] != '\0'; i++){
    if(palavra[i]==' ') {
    x++;
        }

    }printf("Numero de palavras = %d\n",x+1);
     printf("Numero de letras = %d\n", j-(x+1));

    return 0;
}
