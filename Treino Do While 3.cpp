#include <stdio.h>

int main () {
	int numero, contador = 0, soma= 0;
	float media;
		printf("Digite numeros inteiros positivos: ");
			do {
				scanf("%d", &numero);
				if (numero > 0) {
				soma += numero;
				contador++;
			}
			}
			while (numero != 0);
						media = soma / contador;

			printf("Media dos numeros digitados: %.2f", media);
			return 0;
}