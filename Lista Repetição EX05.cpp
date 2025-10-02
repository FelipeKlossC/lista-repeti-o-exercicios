#include <stdio.h>

int main () {
	int contador = 0, numero = 1, limite;
		printf("Digite um numero: ");
		scanf("%d", &limite);
			printf("Numeros pares entre 1 e %d\n", limite);
				while (numero <= limite) {
					if (numero %2 == 0) {
						printf("%d\n", numero);
						contador++;
					}
					numero++;
				}
				printf("A quantidade de numeros pares e de: %d", contador);
				return 0;
}