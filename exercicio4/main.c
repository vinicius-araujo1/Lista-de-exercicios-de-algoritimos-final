#include <stdio.h>

int main()
{
 int i;
 int n;
 printf("diga um valor n=");
 scanf("%d", &n);
 for(i=1; i<=n; i++){
     if(n%i == 0){
         printf("%d\n", i);
     }

     }
 return 0;
 }
