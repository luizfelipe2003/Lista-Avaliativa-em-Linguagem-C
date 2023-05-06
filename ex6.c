#include <stdio.h>
#include <locale.h>

int main() {
   int vetor[10];
   int x, maior, menor;

  
   printf("Digite 10 valores para preencher o vetor:\n");
   for (x = 0; x < 10; x++) {
      scanf("%d", &vetor[x]);
   }

   maior = vetor[0];
   menor = vetor[0];

   for (x = 1; x < 10; x++) {
      if (vetor[x] > maior) {
         maior = vetor[x];
      }
      if (vetor[x] < menor) {
         menor = vetor[x];
      }
   }


   printf("Maior valor do vetor: %d\n", maior);
   printf("Menor valor do vetor: %d\n", menor);

   return 0;
}
