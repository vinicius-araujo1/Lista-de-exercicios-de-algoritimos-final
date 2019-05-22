#include <stdio.h>

int main()
{
  int dentro;
  int fora;
  int i;
  int valor;
  int n = 0;
  int j = 0;

  for (i=0;i<10;i++) {
      printf("escreva um valor no intervalo [10;50]: ");
      scanf("%d", &valor);

      if( valor>=10 && valor<=50){
        n = n + 1;
      }else {
        j = j + 1;
}

  }

printf("valores dentro do intervalo:%d\n", n);
printf("valores fora do intervalo:%d\n", j);

    return 0;
}
