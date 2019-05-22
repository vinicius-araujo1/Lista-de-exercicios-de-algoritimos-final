#include <stdio.h>

int main()
{
    float celsius;
    float farenheit;
    float x;

    printf("coloque o valor para farenheit:");
    scanf("%f", &farenheit);

    x = farenheit - 32;
    celsius = x/1.8;

    printf("%.2f\n", celsius);
    return 0;
}
