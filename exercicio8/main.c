#include <stdio.h>

int main()
{
    system("color E");
 int i;
 int n;
 int calculo=1;
 int calculo2;
 int fat;

 printf("diga um valor n=");

  scanf("%d", &n);


 for(i = 1; i <= 10 ; i++){
     calculo= n * i;
     printf("%d\n", calculo);


     }
 return 0;

 }
