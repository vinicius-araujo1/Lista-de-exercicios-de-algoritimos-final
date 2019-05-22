#include <stdio.h>

int main()
{
 system("color E");
 int i;
 int valor;


 printf("diga um valor n=");

 scanf("%d", &i);

 for(valor=1; i > 1 ; i = i - 1){
    valor = valor*i;

     }
 printf("o fatorial de n eh %d\n\n", valor);
 return 0;
 }
