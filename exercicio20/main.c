#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fatorando( int n ){
    int  d = 2;
    printf("Numero ");
    printf("%d", n );
    printf(" decomposto: ==> ");
    while ( n != 1 ) {
        if ( ! ( n % d ) ) {
            printf(" %d ", d );
            n /= d;
        }
        else
            d++;
    }
    Sleep(1800);
    return(d);
}
int main(){
    int a = 0, n;
    system ("title DECOMPONDO EM FATORES PRIMOS");

    printf("DECOMPONDO EM FATORES PRIMOS\n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Numero digitado: ==> ");
    printf("%d\n", n);
    a = fatorando ( n );
    if ( a == n ){

        printf("O Numero ");
       printf("%d ", a);
        printf("eh primo");
    }
    getche();exit(0);
    return 0;
}
