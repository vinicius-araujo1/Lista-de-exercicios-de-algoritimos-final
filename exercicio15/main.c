#include<stdio.h>

int main()
{
    int i, conta = 0;
    char caracteres[50], c;

    printf("Digite uma string: ");
    gets(caracteres);

    printf("Informe um caractere da string: ");
    scanf("%c", &c);

    for(i=0; caracteres[i]!='\0'; i++) {
        if(caracteres[i]==c)
            conta++;
    }

    if(conta==0) {
        printf("Caractere nao encontrado");
    } else {
        printf ("Contagem de caracteres = %d\n", conta);
    }
}
