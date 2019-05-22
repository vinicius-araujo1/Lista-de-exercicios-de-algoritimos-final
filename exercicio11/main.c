#include <stdio.h>

int main() {

  int j, n;
  int div = 0;

  do {
    printf("Digite um valor n: ");
    scanf("%d", &n);
  } while (n <= 0);

  for (j = 1; j <= n; j++) {
    if (n % j == 0) {
     div++;
    }
  }

  if (div == 2)
    printf("O numero informado eh primo\n\n");
  else
    printf("O numero informado nao eh primo\n\n");

  return 0;
}
