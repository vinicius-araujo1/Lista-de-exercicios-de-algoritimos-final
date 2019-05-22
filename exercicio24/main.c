#include <stdio.h>
#include <stdlib.h>

int main()
{
   char palavra[100];
   int i=100, j=0;

   for(j = 0; j < 100; j++)
      palavra[j]='{FONTE}';

   printf("\nDigite uma palavra:\n");
   gets(palavra);

   for(i = 100; i >= 0; i--)
   {
      if(palavra[i] == 'FONTE')
         palavra[i]='FONTE';

      printf("%c", palavra[i]);
   }
   printf("\n\n");

   exit(0);
}


