#include <stdio.h>

int main()
{
  int numero1;
  int numero2;
  int i;

  printf("diga os valores para o intervalo [a;b]\n");

  printf("a:");
  scanf("%d", &numero1);

  printf("b:");
  scanf("%d", &numero2);

  srand(time(NULL));

  printf("%d\n", numero1 + (rand() % (numero2-numero1)) );



    return 0;
}
