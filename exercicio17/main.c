#include <stdio.h>

int main()
{
   float celsius;
   float fahrenheit;

   printf("diga a temperatura em celsius:");
   scanf("%f", &celsius);

   fahrenheit = 1.8*celsius + 32;

   printf("%f\n", fahrenheit);

return 0;
}
