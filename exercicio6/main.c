#include <stdio.h>

int main()
{
 int a;
 int b;
 int c;
 int L;

 printf("digite um valor L:");
 scanf("%d", &b);

 for (a = 0;a < b;a++) {
     if (a*a > b) {
          printf("menor inteiro positivo x cujo quadrado eh superior ao valor L:\n%d\n", a);
          return 0;

 }

}

    return 0;
}
