#include <stdio.h>

int main () {
	int vetor[10];
		printf("Digite 10 numeros inteiros: \n");
			for (int i = 0; i < 10; i++) {
				printf("Elemento %d: ", i);
				scanf("%d", &vetor[i]);
			}
		printf("Elementos em indices pares: ");
			for (int i = 0; i < 10; i++){
				if (i % 2 == 0){
					printf("vetor[%d]: %d", i, vetor[i]);
				}
			}
			return 0;
}
