#include <locale.h>
#include <stdio.h>

#define N 5 

int main() {
	setlocale(LC_ALL, "");
	
   int vetor[N];
   int x, maior, menor, soma = 0;
   float media;


   printf("Digite 5 numeros inteiros para preencher o vetor:\n");
   for (x = 0; x < N; x++) {
      scanf("%d", &vetor[x]);
   }


   maior = vetor[0];
   menor = vetor[0];
   for (x = 0; x < N; x++) {
      if (vetor[x] > maior) {
         maior = vetor[x];
      }
      if (vetor[x] < menor) {
         menor = vetor[x];
      }
      soma += vetor[x];
   }


   media = (float)soma / N;


   printf("Valores lidos: ");
   for (x = 0; x < N; x++) {
      printf("%d ", vetor[x]);
   }
   printf("\n");
   printf("Maior valor: %d\n", maior);
   printf("Menor valor: %d\n", menor);
   printf("Media dos valores: %.2f\n", media);

   return 0;
}
