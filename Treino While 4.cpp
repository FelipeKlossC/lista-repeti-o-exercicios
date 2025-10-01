#include <Stdio.h>

int main () {
	int i = 1, soma = 0, contador = 0;
	float media;
		while (i <= 100) {
			if (i % 2 == 0) {
				soma = soma + i;
				contador++;
			}
			i++;
		}
		media = soma / contador;
		printf("Soma dos numeros pares: %d\n", soma);
		printf("Quantidade de pares: %d\n", contador);
		printf("Media dos numeros pares: %.2f", media);
}