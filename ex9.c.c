#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[6];
   int x;


   printf("Digite 6 valores pares para preencher o vetor:\n");
   for (x = 0; x < 6; x++) {
      do {
         scanf("%d", &vetor[x]);
      } while (vetor[x] % 2 != 0); 
   }

   printf("Valores do vetor na ordem inversa: ");
   for (x = 5; x >= 0; x--) {
      printf("%d ", vetor[x]);
   }
   printf("\n");

   return 0;
}
