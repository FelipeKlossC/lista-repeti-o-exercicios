#include <stdio.h>

int main () {
	int contador = 1;
	float media, numero, soma = 0;
		printf("Digite 10 valores reais: \n");
			while (contador <= 10) {
				printf("Valor %d: ", contador);
				scanf("%f", &numero);
				soma = soma + numero;
				contador++;

			}
			media = soma / 10;
			printf("A soma dos numeros e: %.2f \n", soma);
			printf("A media dos numeros e: %.2f", media);
			return 0;
}