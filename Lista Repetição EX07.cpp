#include <stdio.h>

int main () {
	int soma = 0, numero;
	printf("Digite numeros para ver a soma dos mesmos (numeros negativos encerram a entrada): \n");
		do {
			scanf("%d", &numero);
			if (numero >= 0)
			soma += numero;
		} while (numero >= 0);
		printf("\nA soma dos numeros e de: %d", soma);
		return 0;
}