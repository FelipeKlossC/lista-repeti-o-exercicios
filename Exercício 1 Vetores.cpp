#include <stdio.h>

int main () {
	float elemento1[4], elemento2[4], resultado[4];
		printf("Digite 4 valores para o primeiro vetor: \n");
			for (int i = 0; i < 4; i++) {
				printf("Elemento %d: ", (i + 1));
				scanf("%f", &elemento1[i]);
			}
			printf("Digite 4 valores para o segundo vetor: ");
			for (int i = 0; i < 4; i++) {
				printf("Elemento %d: \n", (i + 1));
				scanf("%f", &elemento2[i]);
			}
		printf("Resultado da substracao dos vetores: \n");
		for (int i = 0; i < 4; i++) {
		resultado[i] = elemento1[i] - elemento2[i];
		printf("Posicao %d: %.1f\n", (i + 1), resultado[i]);
	}
	return 0;
}
