#include <stdio.h>

int main () {
	int vetor[10];
		printf("Digite 10 numeros inteiros: \n");
			for (int i = 0; i < 10; i++) {
				printf("Elemento %d: ", i);
				scanf("%d", &vetor[i]);
			}
		printf("\nElementos na ordem inversa: \n");
			for (int i = 9; i >= 0; i--) {
				printf("vetor [%d] = %d\n", i, vetor[i]);
			}
			return 0;
}
