#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "");
	
	
	
   int vetor[10];
   int x, cont = 0;
   
   
   printf("Digite os 10 valores do vetor:\n");
   for (i = 0; x < 10; x++) {
      scanf("%d", &vetor[x]);
   }

   
   for (i = 0; x < 10; x++) {
      if (vetor[x] % 2 == 0) {
         cont++;
      }
   }

   
   
   printf("O vetor possui %d valores pares.\n", cont);
   
   return 0;
}

